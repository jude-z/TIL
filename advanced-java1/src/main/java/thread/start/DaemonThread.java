package thread.start;

import javax.swing.plaf.synth.SynthRadioButtonUI;

public class DaemonThread extends Thread{
    @Override
    public void run() {
        System.out.println(Thread.currentThread().getName() + ": run() start");
        try{
            Thread.sleep(10000);
        }catch (InterruptedException e ){
            e.printStackTrace();
            throw new RuntimeException(e);
        }
        System.out.println(Thread.currentThread().getName() + ": run() end");
    }
}
