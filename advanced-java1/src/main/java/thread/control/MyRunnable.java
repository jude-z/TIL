package thread.control;

import util.MyLogger;

import static util.MyLogger.*;

public class MyRunnable implements Runnable{
    @Override
    public void run() {
        try {
            log("start");
            log("myThread.state2 = " + Thread.currentThread().getState());
            log("sleep() start");
            Thread.sleep(3000);
            log("sleep() end");
            log("myThread.state4 = " + Thread.currentThread().getState());
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }


    }
}
