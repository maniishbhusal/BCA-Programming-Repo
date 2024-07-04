// Program that shows the use of `Thread Priority`.

// Definition:- Thread Priority is an integer property of threads that determines the order in which threads are scheduled for execution. This priority is the lowest value of a thread and the highest value of a thread. By default, every thread is given a priority of 5. Thread priority is just a hint to the thread scheduler, and the actual behavior may vary depending on the underlying operating system.

public class ThreadPriority extends Thread {
    public void run() {
        System.out.println("Inside the run() method");
    }

    public static void main(String[] args) {
        // Creating threads with the help of Thread
        ThreadPriority t1 = new ThreadPriority();
        ThreadPriority t2 = new ThreadPriority();

        // the priority of the thread is:
        System.out.println("Priority of the thread t1 is: " + t1.getPriority()); // 5
        System.out.println("Priority of the thread t2 is: " + t2.getPriority()); // 5

        // setting priorities of above threads by passing integers arguments
        t1.setPriority(6);
        t2.setPriority(2);

        System.out.println("Priority of the thread t1 is: " + t1.getPriority());// 6
        System.out.println("Priority of the thread t2 is: " + t2.getPriority());// 2
    }
}
