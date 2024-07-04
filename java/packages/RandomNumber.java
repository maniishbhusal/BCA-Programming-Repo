
// Program to generate a random number
import java.util.Random;

public class RandomNumber {

    public static void main(String[] args) {
        Random random = new Random();
        // generates boolean value
        System.out.println(random.nextBoolean());
        // generates double value
        System.out.println(random.nextDouble());
        // generates float value
        System.out.println(random.nextFloat());
        // generates int value
        System.out.println(random.nextInt());
        // generates int value within specific limit
        System.out.println(random.nextInt(20)); // 0 to 19
        // generates long value
        System.out.println(random.nextLong());
    }
}