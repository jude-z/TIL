package problem.problem4;

import util.MyLogger;

import static util.MyLogger.*;

public class RunnableA implements Runnable{
    @Override
    public void run() {
        while (true){
            try {
                log("A");
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
                throw new RuntimeException(e);
            }
        }
    }
}
