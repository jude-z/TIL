package thread.control.join;

import util.MyLogger;

import static util.MyLogger.*;

public class JoinMainV0 {
    public static void main(String[] args) {
        log("start");
        Thread thread1 = new Thread(new Job());
        Thread thread2 = new Thread(new Job());

        thread1.start();
        thread2.start();
        log("end");
    }
}
