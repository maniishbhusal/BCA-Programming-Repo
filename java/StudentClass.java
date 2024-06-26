
// Lab-12: WAP to create a class named Student with data members; roll_no, name
// and marks, add two methods setData() and displayData() to set the value in
// data members and display them respectively.
class Student {
    int roll_no;
    String name;
    float marks;

    void setData(int roll_no, String name, float marks) {
        this.roll_no = roll_no;
        this.name = name;
        this.marks = marks;
    }

    void displayData() {
        System.out.println("Name: " + name + " Roll No: " + roll_no + " Marks: " + marks);
    }
}

public class StudentClass {

    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setData(1, "Manish", 10.12f);
        s1.displayData();
    }
}