package springbook.user.dao;

import javax.sql.DataSource;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class JdbcContext {
    private DataSource dataSource;

    public void setDataSource(DataSource dataSource) {
        this.dataSource = dataSource;
    }

    public void workWithStatementStrategy(StatementStrategy statement) throws SQLException {
        Connection con = null;
        PreparedStatement pstmt = null;
        try{

            con = dataSource.getConnection();
            pstmt = statement.makePreparedStatement(con);

            pstmt.executeUpdate();
        }catch (SQLException e){
            throw e;
        }finally {
            if(pstmt != null){
                try {
                    pstmt.close();
                }catch (SQLException e){}
            }
            if(con != null){
                try {
                    con.close();
                }catch (SQLException e){}
            }
        }
    }
}
