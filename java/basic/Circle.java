
// Lab-3: WAP to read radius of a circle and calculate area.
import java.util.Scanner;

public class Circle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius: ");
        float radius = sc.nextFloat();
        float area = (float) 3.14 * radius * radius;
        System.out.println("Area of a circle is: " + area);
    }
}