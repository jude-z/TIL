package springbook.user.dao;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationContext;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit.jupiter.SpringExtension;
import springbook.user.domain.User;

import java.sql.SQLException;
import java.util.List;

import static org.assertj.core.api.Assertions.*;

@ExtendWith(SpringExtension.class)
@ContextConfiguration(locations = "/applicationContext.xml")
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
    void addAndGet(){

        dao.deleteAll();
        assertThat(dao.getCount()).isEqualTo(0);

        List<User> users0 = dao.getAll();
        assertThat(users0.size()).isEqualTo(0);

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
    void getUserFailure(){
        dao.deleteAll();
        assertThat(dao.getCount()).isEqualTo(0);

        assertThatThrownBy(() -> dao.get("unknown_id"))
                .isInstanceOf(EmptyResultDataAccessException.class);
    }

    @Test
    void getAll(){
        dao.deleteAll();

        dao.add(user1);
        List<User> users1 = dao.getAll();
        assertThat(users1.size()).isEqualTo(1);
        checkSameUser(user1, users1.get(0));

        dao.add(user2);
        List<User> users2 = dao.getAll();
        assertThat(users2.size()).isEqualTo(2);
        checkSameUser(user1,users2.get(0));
        checkSameUser(user2,users2.get(1));

        dao.add(user3);
        List<User> users3 = dao.getAll();
        assertThat(users3.size()).isEqualTo(3);
        checkSameUser(user3,users3.get(0));
        checkSameUser(user1,users3.get(1));
        checkSameUser(user2,users3.get(2));

    }

    private void checkSameUser(User user1, User user2){
        assertThat(user1.getId()).isEqualTo(user2.getId());
        assertThat(user1.getName()).isEqualTo(user2.getName());
        assertThat(user1.getPassword()).isEqualTo(user2.getPassword());
    }
}
