# Lab3:

### **1. Basic Concepts of Class and Object**

**Question:**
Write a C# program to create a class named `Book` with properties like `Title`, `Author`, and `Price`. Create an object of the class and display the details.

**Answer:**

```csharp
using System;

class Book
{
    public string Title;
    public string Author;
    public double Price;

    public void Display()
    {
        Console.WriteLine($"Title: {Title}, Author: {Author}, Price: {Price}");
    }
}

class Program
{
    static void Main()
    {
        Book b1 = new Book();
        b1.Title = "The Alchemist";
        b1.Author = "Paulo Coelho";
        b1.Price = 499.99;

        b1.Display();
    }
}
```

**Output:**

```
Title: The Alchemist, Author: Paulo Coelho, Price: 499.99
```

---

### **2. Constructors**

**Question:**
Write a C# program to create a class named `Employee` with a parameterized constructor to initialize `Name`, `ID`, and `Department`. Display the details of the employee.

**Answer:**

```csharp
using System;

class Employee
{
    public string Name;
    public int ID;
    public string Department;

    public Employee(string name, int id, string dept)
    {
        Name = name;
        ID = id;
        Department = dept;
    }

    public void Display()
    {
        Console.WriteLine($"Name: {Name}, ID: {ID}, Department: {Department}");
    }
}

class Program
{
    static void Main()
    {
        Employee emp = new Employee("Alice", 101, "IT");
        emp.Display();
    }
}
```

**Output:**

```
Name: Alice, ID: 101, Department: IT
```

---

### **3. Encapsulation and Access Modifiers**

**Question:**
Write a C# program to create a class named `Account` with private fields for `balance` and public methods for `Deposit` and `Withdraw`. Explain how encapsulation is implemented in this program.

**Answer:**

```csharp
using System;

class Account
{
    private double balance;

    public void Deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            Console.WriteLine($"Deposited: {amount}, New Balance: {balance}");
        }
    }

    public void Withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            Console.WriteLine($"Withdrawn: {amount}, Remaining Balance: {balance}");
        }
        else
        {
            Console.WriteLine("Insufficient balance.");
        }
    }
}

class Program
{
    static void Main()
    {
        Account acc = new Account();
        acc.Deposit(1000);
        acc.Withdraw(400);
    }
}
```

**Output:**

```
Deposited: 1000, New Balance: 1000
Withdrawn: 400, Remaining Balance: 600
```

---

### **4. Method Overloading**

**Question:**
Write a C# program to create a class named `Calculator` with overloaded methods `Add(int, int)` and `Add(double, double)`. Display the results.

**Answer:**

```csharp
using System;

class Calculator
{
    public int Add(int a, int b)
    {
        return a + b;
    }

    public double Add(double a, double b)
    {
        return a + b;
    }
}

class Program
{
    static void Main()
    {
        Calculator calc = new Calculator();
        Console.WriteLine("Int Addition: " + calc.Add(5, 10));
        Console.WriteLine("Double Addition: " + calc.Add(5.5, 3.2));
    }
}
```

**Output:**

```
Int Addition: 15
Double Addition: 8.7
```

---

### **5. Inheritance**

**Question:**
Write a C# program where a class `Person` is inherited by a class `Student`. The `Student` class should have additional properties like `RollNumber`. Display the details of the student using a method.

**Answer:**

```csharp
using System;

class Person
{
    public string Name;
    public int Age;
}

class Student : Person
{
    public int RollNumber;

    public void Display()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}, Roll Number: {RollNumber}");
    }
}

class Program
{
    static void Main()
    {
        Student s = new Student();
        s.Name = "Ravi";
        s.Age = 20;
        s.RollNumber = 101;
        s.Display();
    }
}
```

**Output:**

```
Name: Ravi, Age: 20, Roll Number: 101
```

---

### **6. Polymorphism (Method Overriding)**

**Question:**
Write a C# program where a base class `Animal` has a method `MakeSound()`. The method is overridden in derived classes like `Dog` and `Cat` to provide specific sound implementations.

**Answer:**

```csharp
using System;

class Animal
{
    public virtual void MakeSound()
    {
        Console.WriteLine("Animal makes a sound.");
    }
}

class Dog : Animal
{
    public override void MakeSound()
    {
        Console.WriteLine("Dog barks.");
    }
}

class Cat : Animal
{
    public override void MakeSound()
    {
        Console.WriteLine("Cat meows.");
    }
}

class Program
{
    static void Main()
    {
        Animal a;

        a = new Dog();
        a.MakeSound();

        a = new Cat();
        a.MakeSound();
    }
}
```

**Output:**

```
Dog barks.
Cat meows.
```

---

### **7. Abstract Classes and Interfaces**

**Question:**
Write a C# program to create an abstract class `Shape` with an abstract method `CalculateArea()`. Implement it in derived classes like `Rectangle` and `Circle`.

**Answer:**

```csharp
using System;

abstract class Shape
{
    public abstract double CalculateArea();
}

class Rectangle : Shape
{
    public double Length, Breadth;

    public Rectangle(double l, double b)
    {
        Length = l;
        Breadth = b;
    }

    public override double CalculateArea()
    {
        return Length * Breadth;
    }
}

class Circle : Shape
{
    public double Radius;

    public Circle(double r)
    {
        Radius = r;
    }

    public override double CalculateArea()
    {
        return Math.PI * Radius * Radius;
    }
}

class Program
{
    static void Main()
    {
        Shape rect = new Rectangle(5, 4);
        Console.WriteLine("Rectangle Area: " + rect.CalculateArea());

        Shape circ = new Circle(3);
        Console.WriteLine("Circle Area: " + circ.CalculateArea());
    }
}
```

**Output:**

```
Rectangle Area: 20
Circle Area: 28.2743338823081
```

---

### **8. Properties and Indexers**

**Question:**
Write a C# program to create a class `Student` with properties `Name`, `Age`, and `Marks`. Implement property validation in the `set` accessor.

**Answer:**

```csharp
using System;

class Student
{
    private string name;
    private int age;
    private double marks;

    public string Name
    {
        get { return name; }
        set
        {
            if (!string.IsNullOrEmpty(value))
                name = value;
        }
    }

    public int Age
    {
        get { return age; }
        set
        {
            if (value > 0)
                age = value;
        }
    }

    public double Marks
    {
        get { return marks; }
        set
        {
            if (value >= 0 && value <= 100)
                marks = value;
        }
    }

    public void Display()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}, Marks: {Marks}");
    }
}

class Program
{
    static void Main()
    {
        Student s = new Student();
        s.Name = "Anjali";
        s.Age = 19;
        s.Marks = 88.5;
        s.Display();
    }
}
```

**Output:**

```
Name: Anjali, Age: 19, Marks: 88.5
```

---
