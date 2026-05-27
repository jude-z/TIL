package thread.start;

import javax.swing.plaf.synth.SynthRadioButtonUI;

public class DaemonThreadMain {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName() + ": main() start");
        DaemonThread daemonThread = new DaemonThread();
        daemonThread.setDaemon(false);
        daemonThread.start();
        System.out.println(Thread.currentThread().getName() + "main() end");
    }
}
