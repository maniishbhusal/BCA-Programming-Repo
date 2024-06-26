// Lab-15: Program that show different types of inheritance

// Base class
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

// Single inheritance: Dog is inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking");
    }
}

// Multilevel inheritance: BabyDog is inheriting from Dog, which inturn inherits
// from Animal
class BabyDog extends Dog {
    void weep() {
        System.out.println("BabyDog is weeping");
    }
}

// Hierarchical inheritance: Cat and Dog both inherit from Animal
class Cat extends Animal {
    void meow() {
        System.out.println("Cat is meowing");
    }
}

public class Inheritance {

    public static void main(String[] args) {
        // Single Inheritance
        Dog dog = new Dog();
        dog.eat();
        dog.bark();

        // Multilevel Inheritance
        BabyDog babyDog = new BabyDog();
        babyDog.bark();
        babyDog.eat();
        babyDog.weep();

        // Hierarchical Inheritance
        Cat cat = new Cat();
        cat.eat();
        cat.meow();
    }
}