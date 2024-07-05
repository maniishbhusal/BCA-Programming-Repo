
// Lab-1: WAP to read p,t,r and calculate simple interest
import java.util.Scanner;

public class SimpleInterest {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter principal amount: ");
        int p = sc.nextInt();
        System.out.print("Enter time: ");
        int t = sc.nextInt();
        System.out.print("Enter radius: ");
        float r = sc.nextFloat();
        float si = (p * t * r) / 100;
        System.out.println("Simple Interest: " + si);
    }
}
