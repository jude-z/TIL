package thread.control.join;

import util.MyLogger;

import static util.MyLogger.*;

public class Job implements Runnable{
    @Override
    public void run() {
        log("work start");
        sleep(2000);
        log("work end");

    }
}
