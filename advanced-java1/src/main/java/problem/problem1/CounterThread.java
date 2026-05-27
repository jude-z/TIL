package problem.problem1;

import util.MyLogger;

import static util.MyLogger.*;

public class CounterThread extends Thread{
    @Override
    public void run() {
        for(int i = 1;i<=5;i++){
            try {
                log("value : " + i);
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
                throw new RuntimeException(e);
            }
        }
    }
}
