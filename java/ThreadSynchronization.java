// Program that shows the use of Thread Synchronization

// Definition:- Thread Synchronization is a mechanism to control the access of multiple threads to shared resources. It ensures that only one thread can access the resource at a time preventing thread interference and consistency problems.

class Table {
    // Synchronized method to print the table
    synchronized void printTable(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + (n * i));
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }

    // Method with synchronized block for printing table
    void printTableWithBlock(int n) {
        synchronized (this) { // Synchronized block
            for (int i = 1; i <= 10; i++) {
                System.out.println(n + " * " + i + " = " + (n * i));
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    System.out.println(e);
                }
            }
        }
    }
}

public class ThreadSynchronization {

    public static void main(String[] args) {
        Table obj = new Table();
        Thread t1 = new Thread(() -> obj.printTable(5));
        Thread t2 = new Thread(() -> obj.printTable(7));
        t1.start();
        t2.start();
    }
}