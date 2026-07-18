package springbook.user.dao;

import org.springframework.dao.EmptyResultDataAccessException;
import springbook.user.domain.User;

import javax.sql.DataSource;
import java.sql.*;

public class UserDao {
    private DataSource dataSource;
    private JdbcContext jdbcContext;

    public void setDataSource(DataSource dataSource){
        this.dataSource = dataSource;
        this.jdbcContext = new JdbcContext();
        this.jdbcContext.setDataSource(dataSource);
    }

    public void add(User user) throws SQLException {

        jdbcContext.workWithStatementStrategy(new StatementStrategy() {
            @Override
            public PreparedStatement makePreparedStatement(Connection con) throws SQLException {
                String sql = "insert into users(id, name, password) values(?,?,?)";
                PreparedStatement pstmt = con.prepareStatement(sql);
                pstmt.setString(1,user.getId());
                pstmt.setString(2,user.getName());
                pstmt.setString(3,user.getPassword());
                return pstmt;
            }
        });
    }

    public User get(String id) throws SQLException {
        Connection con = null;
        PreparedStatement pstmt = null;
        ResultSet rs = null;
        try{
            User user = null;
            con = dataSource.getConnection();
            String sql = "select * from users where id = ?";
            pstmt = con.prepareStatement(sql);
            pstmt.setString(1,id);

            rs = pstmt.executeQuery();
            if(rs.next()){
                user = new User();
                user.setId(rs.getString("id"));
                user.setName(rs.getString("name"));
                user.setPassword(rs.getString("password"));
            }
            if(user == null) throw new EmptyResultDataAccessException(1);
            return user;
        }catch (SQLException e){
            throw e;
        }
        finally {
            if(rs != null){
                try {
                    rs.close();
                }catch (SQLException e){}
            }
            if(pstmt != null){
                try {
                    pstmt.close();
                }catch (SQLException e){}
            }
            if(con != null){
                try{
                    con.close();
                }catch (SQLException e){}
            }

        }

    }

    public void deleteAll() throws SQLException {
        jdbcContext.workWithStatementStrategy(new StatementStrategy() {
            @Override
            public PreparedStatement makePreparedStatement(Connection con) throws SQLException {
                String sql = "delete from users;";
                return con.prepareStatement(sql);
            }
        });
    }

    public int getCount() throws SQLException {
        Connection con = null;
        PreparedStatement pstmt = null;
        ResultSet rs = null;
        try{
            con = dataSource.getConnection();

            String sql = "select count(*) from users";
            pstmt = con.prepareStatement(sql);

            rs = pstmt.executeQuery();
            rs.next();
            return rs.getInt(1);

        }catch (SQLException e){
            throw e;
        }finally {
            if(rs != null){
                try{
                    rs.close();
                }catch (SQLException e){}
            }
            if(pstmt != null){
                try{
                    pstmt.close();
                }catch (SQLException e){}
            }
            if(con != null){
                try{
                    con.close();
                }catch (SQLException e){}
            }
        }

    }



}
