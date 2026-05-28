package thread.control;

import util.MyLogger;

import static util.MyLogger.*;

public class ThreadStateMain {
    public static void main(String[] args) throws InterruptedException {
        Thread thread = new Thread(new MyRunnable());
        log("myThread.state1 = " + thread.getState());
        log("myThread.start()");
        thread.start();
        Thread.sleep(1000);
        log("myThread.state3 = " + thread.getState());
        Thread.sleep(4000);
        log("myThread.state5 = " + thread.getState());
        log("end");

    }
}
