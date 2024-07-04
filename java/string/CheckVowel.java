
/*Lab-13: WAP that takes the user to provide a single character from the alphabet. Print Vowel or Consonant, depending on the user input. If the user input is not a letter (between a and z or A and Z), or is a string of length > 1, print an error message */
import java.util.Scanner;

public class CheckVowel {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a character: ");
        String input = sc.nextLine();
        if (input.length() > 1)
            System.out.println("Error: Input is not a single character");
        else {
            char ch = input.charAt(0);
            if (ch > 122 || ch < 65)
                System.out.println("Enter valid character");
            else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E'
                    || ch == 'I'
                    || ch == 'O' || ch == 'U')
                System.out.println("Vowel");
            else
                System.out.println("Consonant");
        }
    }
}