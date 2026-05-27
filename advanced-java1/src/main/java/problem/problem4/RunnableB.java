package problem.problem4;

import util.MyLogger;

import static util.MyLogger.*;

public class RunnableB implements Runnable {
    @Override
    public void run() {
        while(true){
            try {
                log("B");
                Thread.sleep(500);
            } catch (InterruptedException e) {
                e.printStackTrace();
                throw new RuntimeException(e);
            }
        }
    }
}
