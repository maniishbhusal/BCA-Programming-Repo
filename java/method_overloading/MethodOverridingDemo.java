// Lab-16: Example program for Method Overriding

// Method overriding is a feature in object-oriented programming that allows a subclass to provide a specific implementation of a method that is already defined by a superclass. This allows a class to inherit from a superclass while also modifying its behavior as needed. 

class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}

public class MethodOverridingDemo {

    public static void main(String[] args) {
        Animal a = new Animal();
        a.sound();
        Dog d = new Dog();
        d.sound();
    }
}