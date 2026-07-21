package springbook.user.dao;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.jdbc.datasource.SingleConnectionDataSource;
import org.springframework.test.annotation.DirtiesContext;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit.jupiter.SpringExtension;
import springbook.user.domain.User;

import javax.sql.DataSource;
import java.sql.SQLException;

import static org.assertj.core.api.Assertions.*;

@ExtendWith(SpringExtension.class)
@ContextConfiguration(locations = "/test-applicationContext.xml")
public class UserDaoTest {

    @Autowired
    ApplicationContext context;

    private UserDao dao;
    private User user1;
    private User user2;
    private User user3;
    @BeforeEach
    void setUp(){
        dao = context.getBean("userDao", UserDao.class);
        user1 = new User("jude1","jude1","password");
        user2 = new User("jude2","jude2","password");
        user3 = new User("jude3","jude3","password");
    }
    @Test
    void addAndGet() throws SQLException {

        dao.deleteAll();
        assertThat(dao.getCount()).isEqualTo(0);

        dao.add(user1);
        dao.add(user2);
        dao.add(user3);
        User fetchUser = dao.get(user1.getId());

        assertThat(fetchUser.getId()).isEqualTo(user1.getId());
        assertThat(fetchUser.getName()).isEqualTo(user1.getName());
        assertThat(fetchUser.getPassword()).isEqualTo(user1.getPassword());
        assertThat(dao.getCount()).isEqualTo(3);

    }
    @Test
    void getUserFailure() throws SQLException {
        dao.deleteAll();
        assertThat(dao.getCount()).isEqualTo(0);

        assertThatThrownBy(() -> dao.get("unknown_id"))
                .isInstanceOf(EmptyResultDataAccessException.class);
    }
}
