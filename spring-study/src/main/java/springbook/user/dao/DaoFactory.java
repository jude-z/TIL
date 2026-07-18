package springbook.user.dao;

import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Bean;
import org.springframework.jdbc.datasource.SimpleDriverDataSource;

import javax.sql.DataSource;

@Configuration
public class DaoFactory {
    @Bean
    public UserDao userDao(){
        UserDao dao = new UserDao();
        dao.setDataSource(dataSource());
        return dao;
    }
    @Bean
    public ConnectionMaker connectionMaker(){
        return new SimpleConnectionMaker();
    }

    @Bean
    public DataSource dataSource(){
        SimpleDriverDataSource dataSource = new SimpleDriverDataSource();
        String url = "jdbc:mysql://localhost/springbook";
        String username = "root";
        String password = "00000000";

        dataSource.setDriverClass(com.mysql.jdbc.Driver.class);
        dataSource.setUrl(url);
        dataSource.setUsername(username);
        dataSource.setPassword(password);

        return dataSource;

    }
}
