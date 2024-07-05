// Example to Connect Java Application with mysql database
// This program prints all the rows from ‘emp(id,name,age)’ table  from sonoo database.

package java.jdbc_;

import java.sql.*;  
public class MysqlCon {  
    public static void main(String args[]) {  
        try {  
            // Load MySQL JDBC Driver
            Class.forName("com.mysql.jdbc.Driver");  
            
            // Establish connection to the database
            Connection con = DriverManager.getConnection(  
                "jdbc:mysql://localhost:3306/sonoo", "root", "root");  
            
            // Create a statement to execute SQL queries
            Statement stmt = con.createStatement();  
            
            // Execute a query to retrieve all rows from the 'emp' table
            ResultSet rs = stmt.executeQuery("select * from emp");  

            // Insert into 'emp' table
            /*int i = stmt.executeUpdate("insert into emp values(3, 'ravi', 30)");  
            System.out.println(i+" records inserted");  */

            // Update 'emp' table
            /*int i = stmt.executeUpdate("update emp set name='sonu', age=32 where id=3");  
            System.out.println(i+" records updated");  */

            // Delete id of 3
            // int i = stmt.executeUpdate("delete from emp where id=3");
            // System.out.println(i+" records deleted");
            
            // Iterate through the result set and print each row
            while (rs.next()) {
                // Retrieve and print column values by index
                System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getInt(3));  
            }  
            
            // Close the database connection
            con.close();  
        } catch (Exception e) { 
            System.out.println(e);
        }  
    }  
}
