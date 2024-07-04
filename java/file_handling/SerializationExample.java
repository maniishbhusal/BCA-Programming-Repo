// Lab-21: Program to write object using serialization 

// Serialization is a mechanism of converting the state of an object into a byte stream 

import java.io.*;

class Student implements Serializable {
    int r;
    String name;
    String address;

    Student(int r, String name, String address) {
        this.r = r;
        this.name = name;
        this.address = address;
    }
}

public class SerializationExample {

    public static void main(String[] args) {
        try {
            Student s = new Student(1, "Manish", "Ghorahi");
            FileOutputStream fos = new FileOutputStream("file_handling/studentfile.dat");
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeObject(s);
            System.out.println("Success...");
            fos.close();
            oos.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}