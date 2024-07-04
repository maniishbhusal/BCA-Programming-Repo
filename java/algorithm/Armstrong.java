
// Lab-9: WAP to read a number and test if it is armstrong or not using do while
import java.util.Scanner;

public class Armstrong {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int originalNum = n;
        int sum = 0;
        do {
            int rem = n % 10;
            sum = sum + rem * rem * rem;
            n /= 10;
        } while (n != 0);
        if (originalNum == sum)
            System.out.println("Armstrong");
        else
            System.out.println("Not Armstrong");
    }
}