package thread.control.join;

import static util.MyLogger.log;

public class JoinMainV1 {
    public static void main(String[] args) {
        SumTask sumTask1 = new SumTask(1, 50);
        SumTask sumTask2 = new SumTask(51, 100);
        Thread thread1 = new Thread(sumTask1);
        Thread thread2 = new Thread(sumTask2);
        thread1.start();
        thread2.start();

        log("task1.result = " + sumTask1.result);
        log("task2.result = " + sumTask2.result);

        int sumAll = sumTask1.result + sumTask2.result;
        log("task1 + task2 = " + sumAll);
        log("end");
    }
}
