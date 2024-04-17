import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class TEST {
    public static void main(String[] args) {
        Class.forName("com.mysql.cj.jdbc.Driver");
        String jdbcUrl = "jdbc:mysql://localhost:3306/java";
        String username = "root";
        String password = "Mohit@0401";

        try (Connection connection = DriverManager.getConnection(jdbcUrl, username, password)) {
            System.out.println("Connection successful!");
        } catch (SQLException e) {
            System.out.println("Connection failed. Error: " + e.getMessage());
        }
    }
}
