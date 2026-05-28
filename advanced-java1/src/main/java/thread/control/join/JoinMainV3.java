package thread.control.join;

import static util.MyLogger.log;

public class JoinMainV3 {
    public static void main(String[] args) throws InterruptedException {
        SumTask task1 = new SumTask(1, 50);
        SumTask task2 = new SumTask(51, 100);
        Thread thread1 = new Thread(task1);
        Thread thread2 = new Thread(task2);
        thread1.start();
        thread2.start();
        log("join() - main thread is waiting until thread1, thread2 is done");
        thread1.join();
        thread2.join();
        log("main thread waiting end");
        log("task1.result = " + task1.result);
        log("task2.result = " + task2.result);
        int sumAll = task1.result + task2.result;
        log("task1 + task2 = " + sumAll);
        log("end");
    }
}
