package thread.control.join;

import util.MyLogger;

import static util.MyLogger.*;

public class SumTask implements Runnable{
    int startValue;
    int endValue;
    int result;

    public SumTask(int startValue, int endValue) {
        this.startValue = startValue;
        this.endValue = endValue;
        this.result = 0;
    }

    @Override
    public void run() {
        log("work start");
        sleep(2000);
        for(int i = startValue;i<=endValue;i++){
            result += i;
        }
        log("work end result = " + result);

    }
}
