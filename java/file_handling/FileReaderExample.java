
// Lab-19: Program to read from a file using FileReader class i.e. Character Stream
import java.io.FileReader;

public class FileReaderExample {

    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("file_handling/file1.txt");
            int i;
            while ((i = fr.read()) != -1) {
                System.out.print((char) i);
            }
            fr.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}