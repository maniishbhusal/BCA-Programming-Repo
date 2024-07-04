// Java Wrapper classes Example

// Autoboxing: The automatic conversion of primitive data types to the object of their corresponding wrapper classes is known as autoboxing. For example, int is converted to Integer, byte to Byte, char to Character, long to Long, short to Short, double to Double, float to Float, boolean to Boolean.

// Unboxing: The automatic conversion of object of wrapper class to primitive data types is known as unboxing. For example, Integer is converted to int. It is the reverse process of autoboxing.

public class WrapperClasses {
    public static void main(String args[]) {
        byte b = 10;
        short s = 20;
        char c = 'a';
        int i = 30;
        float f = 42.32f;
        long l = 232323;
        double d = 2323.2323;
        boolean b2 = true;

        // Autoboxing: Converting primitives into objects
        Byte byteobj = b;
        Short shortobj = s;
        Character charobj = c;
        Integer intobj = i;
        Float floatobj = f;
        Long longobj = l;
        Double doubleobj = d;
        Boolean boolobj = b2;

        // Printing objects
        System.out.println("----Printing object values----");
        System.out.println("Byte object: " + byteobj);
        System.out.println("Short object: " + shortobj);
        System.out.println("Character object: " + charobj);
        System.out.println("Integer object: " + intobj);
        System.out.println("Float object: " + floatobj);
        System.out.println("Long object: " + longobj);
        System.out.println("Double object: " + doubleobj);
        System.out.println("Boolean object: " + boolobj);

        // Unboxing: Converting objects to primitives
        byte bytevalue = byteobj;
        short shortvalue = shortobj;
        char charvalue = charobj;
        int intvalue = intobj;
        float floatvalue = floatobj;
        long longvalue = longobj;
        double doublevalue = doubleobj;
        boolean boolvalue = boolobj;

        // Printing primitives
        System.out.println("----Printing primitive values----");
        System.out.println("byte value: " + bytevalue);
        System.out.println("short value: " + shortvalue);
        System.out.println("char value: " + charvalue);
        System.out.println("int value: " + intvalue);
        System.out.println("float value: " + floatvalue);
        System.out.println("long value: " + longvalue);
        System.out.println("double value: " + doublevalue);
        System.out.println("boolean value: " + boolvalue);
    }
}
