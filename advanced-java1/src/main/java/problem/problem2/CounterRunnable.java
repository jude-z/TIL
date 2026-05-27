package problem.problem2;

import util.MyLogger;

public class CounterRunnable implements Runnable{
    @Override
    public void run() {
        for(int i = 1;i<=5;i++){
            MyLogger.log("value : " + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
                throw new RuntimeException(e);
            }
        }
    }
}
