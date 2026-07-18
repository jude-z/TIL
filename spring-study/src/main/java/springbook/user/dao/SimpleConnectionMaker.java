package springbook.user.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class SimpleConnectionMaker implements ConnectionMaker{
    @Override
    public Connection makeConnection() throws SQLException {
        String url = "jdbc:mysql://localhost/springbook";
        String username = "root";
        String password = "00000000";

        Connection con = DriverManager.getConnection(url,username,password);
        return con;
    }


}
