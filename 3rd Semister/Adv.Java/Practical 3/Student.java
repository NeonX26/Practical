import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
public class Student{
    public void createDatabase() {
        try {
            String url = "jdbc:mysql://localhost:3306/";
            String userName = "root";
            String password = "Admin@12345";
            Connection conn = 
            DriverManager.getConnection(url,userName,password);
            //statement create
            Statement stm = conn.createStatement();
            //execute query
            String query = "create database Aurangabad";
            stm.execute(query);
            System.out.println("Database created Successfully");
            conn.close();
        }catch(Exception e) {
            e.printStackTrace();
    }
}
public void createTable() {
    try {
        String url = "jdbc:mysql://localhost:3306/city";
        String userName = "root";
        String password = "NeonX@26";
        Connection conn = DriverManager.getConnection(url,userName,password);
        //statement create
        Statement stm = conn.createStatement();
        //execute query
        String query = "create table student(sid int(3),sname varchar(200),semail varchar(200));";
        stm.execute(query);
        System.out.println("Table created Successfully");
        conn.close();
    }catch(Exception e) {
        e.printStackTrace();
    }
}
//CRUD-create data or insert,read,update and delete
public void createData() {
    try {
        String url = "jdbc:mysql://localhost:3306/";
        String db = "city";
        String userName = "root";
        String password = "Admin@12345";
        Connection conn = 
        DriverManager.getConnection(url+db,userName,password);
        //statement create
        Statement stm = conn.createStatement();
        //execute query
        String query = "Insert into student (sid,sname,semail) values(1,'John','john@gmail.com')";
        stm.execute(query);
        String query1 = "Insert into student (sid,sname,semail) values(?,?,?)";
        PreparedStatement pstm = conn.prepareStatement(query);
        pstm.setInt(1,15);
        pstm.setString(2,"Tonny");
        pstm.setString(3,"tonny@gmail.com");
        pstm.setInt(1,16);
        pstm.setString(2,"sonny");
        pstm.setString(3,"sonny@gmail.com");
        //pstm.execute();
        pstm.executeUpdate();
        //pstm.executeQuery();
        System.out.println("Data Inserted Successfully");
        conn.close();
    }catch(Exception e) {
        e.printStackTrace();
    }
}
public void readData() {
    try {
        String url = "jdbc:mysql://localhost:3306/village";
        String userName = "root";
        String password = "Admin@12345";
        Connection conn = DriverManager.getConnection(url,userName,password);
        String query = "select * from student";
        //statement create
        Statement stm = conn.createStatement();
        //execute query
        ResultSet rs = stm.executeQuery(query);
        while(rs.next()) {
        System.out.println("sid =" +rs.getInt(1));
        System.out.println("sname =" +rs.getString(2));
        System.out.println("semail =" +rs.getString(3));
        }
        System.out.println("Read Successfully");
        conn.close();
    }catch(Exception e) {
        e.printStackTrace();
    }
}
public void updateData() {
    try {
        String url = "jdbc:mysql://localhost:3306/";
        String db = "village";
        String userName = "root";
        String password = "Admin@12345";
        Connection conn = 
        DriverManager.getConnection(url+db,userName,password);
        //statement create
        Statement stm = conn.createStatement();
        //execute query
        String query = "Update student set sid = ? where sname = ?";
        PreparedStatement pstm = conn.prepareStatement(query);
        pstm.setInt(1,12);
        pstm.setString(2,"John");
        pstm.setString(3,"tonny@gmail.com");
        //pstm.execute();
        pstm.executeUpdate();
        //pstm.executeQuery();
        System.out.println("Data updated Successfully");
        conn.close();
    }catch(Exception e) {
        e.printStackTrace();
    }
}
public void deleteData() {
    try {
        String url = "jdbc:mysql://localhost:3306/";
        String db = "village";
        String userName = "root";
        String password = "Admin@12345";
        Connection conn = 
        DriverManager.getConnection(url+db,userName,password);
        //statement create
        Statement stm = conn.createStatement();
        String query = "delete from student where sid = 12;";
        //execute query
        stm.execute(query);
        System.out.println("Data deleted Successfully");
        conn.close();
    }catch(Exception e) {
        e.printStackTrace();
    }
}
}
public class Main {
    public static void main(String[] args) {
        Student st = new Student();
        st.createDatabase();
        st.createTable();
        st.createData();
        st.readData();
        st.updateData();
        st.deleteData();
    }
}