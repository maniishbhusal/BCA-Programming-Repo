
// Lab-8: WAP to read a number and test if it is palindrome or not
import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        int num, rev = 0, rem;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        int originalNum = num;
        while (num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if (rev == originalNum)
            System.out.println("Palindrome");
        else
            System.out.println("Not palindrome");
    }
}