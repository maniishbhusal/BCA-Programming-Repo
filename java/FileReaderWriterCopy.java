
// Lab-20: Program to copy content of one file to another using character stream 
import java.io.FileReader;
import java.io.FileWriter;

public class FileReaderWriterCopy {

    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("file_handling/file1.txt");
            FileWriter fw = new FileWriter("file_handling/file2_copied.txt");
            int i;
            while ((i = fr.read()) != -1) {
                fw.write((char) i);
            }
            fr.close();
            fw.close();
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("Copied...");
    }
}