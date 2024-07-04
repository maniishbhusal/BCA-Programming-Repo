// Program that shows the use of Multithreading

// Definition:- Multithreading is a Java feature that allows concurrent execution of two or more parts of a program for maximum utilization of CPU.

import java.util.Random;

// Method-1: Class extending Thread to create a multi-threaded application
class ThreadExample extends Thread {
    // The run method defines the code that constitutes the new thread
    public void run() {
        for (int i = 1; i <= 5; i++) {
            // Generates a random number from 1 to 100
            Random rand = new Random();
            int n = rand.nextInt(100) + 1; // nextInt(100) generates a number between 0 and 99, hence adding 1
            System.out.println(n);

            // Pauses the thread for 1000 milliseconds (1 second)
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                // Prints the exception if the thread is interrupted
                System.out.println(e);
            }
        }
    }
}

// Method-2: Class implementing Runnable to create a multi-threaded application
class RunnableExample implements Runnable {
    // The run method defines the code that constitutes the new thread
    public void run() {
        for (int i = 1; i <= 5; i++) {
            // Generates a random number from 1 to 100
            Random rand = new Random();
            int n = rand.nextInt(100) + 1; // nextInt(100) generates a number between 0 and 99, hence adding 1
            System.out.println(n);

            // Pauses the thread for 1000 milliseconds (1 second)
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                // Prints the exception if the thread is interrupted
                System.out.println(e);
            }
        }
    }
}

public class MultiThread {
    public static void main(String[] args) {
        // Example using Thread class
        System.out.println("Using Thread class:");
        for (int i = 1; i <= 5; i++) { // 5 threads running at the same time
            ThreadExample t = new ThreadExample();
            t.start(); // Starts the new thread, which will call the run() method
        }

        // Example using Runnable interface
        System.out.println("Using Runnable interface:");
        for (int i = 1; i <= 5; i++) {
            RunnableExample re = new RunnableExample();
            Thread t1 = new Thread(re);
            t1.start(); // Starts the new thread, which will call the run() method of RunnableExample
        }
    }
}
