package springbook.user.dao;

import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.PreparedStatementCreator;
import org.springframework.jdbc.core.RowMapper;
import springbook.user.domain.User;

import javax.sql.DataSource;
import java.sql.*;
import java.util.List;

public class UserDaoJdbc implements UserDao{
//    private DataSource dataSource;
//    private JdbcContext jdbcContext;
    private JdbcTemplate jdbcTemplate;
    private RowMapper<User> userMapper = new RowMapper<User>() {
        @Override
        public User mapRow(ResultSet rs, int rowNum) throws SQLException {
            User user = new User();
            user.setId(rs.getString("id"));
            user.setName(rs.getString("name"));
            user.setPassword(rs.getString("password"));
            return user;
        }
    };
    public void setDataSource(DataSource dataSource){
//        this.dataSource = dataSource;
        this.jdbcTemplate = new JdbcTemplate(dataSource);
//        this.jdbcContext = new JdbcContext();
//        this.jdbcContext.setDataSource(dataSource);
    }

    public void add(User user){
        String sql = "insert into users(id, name, password) values(?,?,?)";
//        jdbcContext.workWithStatementStrategy(new StatementStrategy() {
//            @Override
//            public PreparedStatement makePreparedStatement(Connection con) throws SQLException {
//                String sql = "insert into users(id, name, password) values(?,?,?)";
//                PreparedStatement pstmt = con.prepareStatement(sql);
//                pstmt.setString(1,user.getId());
//                pstmt.setString(2,user.getName());
//                pstmt.setString(3,user.getPassword());
//                return pstmt;
//            }
//        });
        jdbcTemplate.update(sql, user.getId(),user.getName(),user.getPassword());
    }

    public User get(String id){
        String sql = "select * from users where id = ?";
//        Connection con = null;
//        PreparedStatement pstmt = null;
//        ResultSet rs = null;
//        try{
//            User user = null;
//            con = dataSource.getConnection();
//            String sql = "select * from users where id = ?";
//            pstmt = con.prepareStatement(sql);
//            pstmt.setString(1,id);
//
//            rs = pstmt.executeQuery();
//            if(rs.next()){
//                user = new User();
//                user.setId(rs.getString("id"));
//                user.setName(rs.getString("name"));
//                user.setPassword(rs.getString("password"));
//            }
//            if(user == null) throw new EmptyResultDataAccessException(1);
//            return user;
//        }catch (SQLException e){
//            throw e;
//        }
//        finally {
//            if(rs != null){
//                try {
//                    rs.close();
//                }catch (SQLException e){}
//            }
//            if(pstmt != null){
//                try {
//                    pstmt.close();
//                }catch (SQLException e){}
//            }
//            if(con != null){
//                try{
//                    con.close();
//                }catch (SQLException e){}
//            }
//
//        }
        return jdbcTemplate.queryForObject(sql, new Object[]{id}, userMapper);

    }

    public void deleteAll(){
        String sql = "delete from users";
//        this.jdbcContext.executeSql(sql);
        this.jdbcTemplate.update(new PreparedStatementCreator() {
            @Override
            public PreparedStatement createPreparedStatement(Connection con) throws SQLException {
                return con.prepareStatement(sql);
            }
        });
    }

    public int getCount(){
        String sql = "select count(*) from users";
//        Connection con = null;
//        PreparedStatement pstmt = null;
//        ResultSet rs = null;
//        try{
//            con = dataSource.getConnection();
//
//            String sql = "select count(*) from users";
//            pstmt = con.prepareStatement(sql);
//
//            rs = pstmt.executeQuery();
//            rs.next();
//            return rs.getInt(1);
//
//        }catch (SQLException e){
//            throw e;
//        }finally {
//            if(rs != null){
//                try{
//                    rs.close();
//                }catch (SQLException e){}
//            }
//            if(pstmt != null){
//                try{
//                    pstmt.close();
//                }catch (SQLException e){}
//            }
//            if(con != null){
//                try{
//                    con.close();
//                }catch (SQLException e){}
//            }
//        }
//        return jdbcTemplate.query(new PreparedStatementCreator() {
//            @Override
//            public PreparedStatement createPreparedStatement(Connection con) throws SQLException {
//                return con.prepareStatement(sql);
//            }
//        }, new ResultSetExtractor<Integer>() {
//            @Override
//            public Integer extractData(ResultSet rs) throws SQLException, DataAccessException {
//                rs.next();
//                return rs.getInt(1);
//            }
//        });
        return jdbcTemplate.queryForObject(sql, new RowMapper<Integer>() {
            @Override
            public Integer mapRow(ResultSet rs, int rowNum) throws SQLException {
                return rs.getInt(1);
            }
        });

    }

    public List<User> getAll(){
        String sql = "select * from users";
        return jdbcTemplate.query(sql, userMapper);
    }





}
