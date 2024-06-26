/*Lab-14: WAP called Swap2Integers that prompts user for two integers. The program shall read the inputs as int, save in two variables called number1 and number2; swap the contents of the two variables; and print the results. */

import java.util.Scanner;

public class Swap2Integers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers:");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.print("Numbers before swapping\nNumber1: " + num1 + ", Number2: " + num2);
        int temp = num1;
        num1 = num2;
        num2 = temp;
        System.out.print("\nSwapped Numbers:\nNumber1: " + num1 + ", Number2: " + num2);

    }
}