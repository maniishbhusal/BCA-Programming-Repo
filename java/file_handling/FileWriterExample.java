
// Lab-18: Program to write in a file using FileWriter Class i.e. Character Stream
import java.io.FileWriter;

public class FileWriterExample {

    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("file_handling/file1.txt");
            fw.write("Hello World");
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("Success...");
    }
}