
// Lab-2: WAP to read length and breadth and calculate area and perimeter.
import java.util.Scanner;

public class Rectangle {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        int length = sc.nextInt();
        System.out.print("Enter breadth: ");
        int breadth = sc.nextInt();
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        System.out.println("Area: " + area);
        System.out.println("Perimeter: " + perimeter);
    }
}