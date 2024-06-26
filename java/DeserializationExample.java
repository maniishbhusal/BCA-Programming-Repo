// Lab-22: Program to read object i.e. deserialization 

// Deserialization is the reverse process where the byte stream is used to recreate the actual java object in memory

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

public class DeserializationExample {

    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("file_handling/studentfile.dat");
            ObjectInputStream ois = new ObjectInputStream(fis);
            Student s = (Student) ois.readObject();
            System.out.println(s.r + " " + s.name + " " + s.address);
            fis.close();
            ois.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}