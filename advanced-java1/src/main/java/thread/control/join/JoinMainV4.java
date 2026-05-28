package thread.control.join;

import static util.MyLogger.log;

public class JoinMainV4 {
    public static void main(String[] args) throws InterruptedException {
        SumTask task = new SumTask(1, 50);
        Thread thread = new Thread(task);
        thread.start();
        thread.join(1000);
        log("task.result = " + task.result);

    }
}
