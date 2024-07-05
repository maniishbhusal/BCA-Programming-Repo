/* Lab-6:
 * WAP to read marks of 4 subjects, then calculate and display percentage. Also
 * display division based on:
 * per>=80 -> "distinction"
 * 60<per<80-> "first division"
 * 50<per<60 -> "second division"
 * 40<per<50 -> "Third division"
 * otherwise -> "fail"
 */

import java.util.Scanner;

public class DisplayPercentage {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks in 4 subjects:");
        int m1 = sc.nextInt();
        int m2 = sc.nextInt();
        int m3 = sc.nextInt();
        int m4 = sc.nextInt();

        int total = m1 + m2 + m3 + m4;
        int per = total / 4;
        System.out.println("Percentage is: " + per);

        if (per >= 80)
            System.out.println("Distinction");
        else if (per >= 60 && per < 80)
            System.out.println("First Division");
        else if (per >= 50 && per < 60)
            System.out.println("First Division");
        else if (per >= 40 && per < 50)
            System.out.println("Third Division");
        else
            System.out.println("Fail");
    }
}