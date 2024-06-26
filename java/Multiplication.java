
// Lab-11: WAP to display multiplication table of a given number
import java.util.Scanner;

public class Multiplication {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        for (int i = 1; i <= 10; i++)
            System.out.println(num + "x" + i + " = " + num * i);
    }
}