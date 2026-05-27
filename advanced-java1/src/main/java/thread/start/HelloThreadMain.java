package thread.start;

public class HelloThreadMain {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName() + ": main() start");
        HelloThread helloThread = new HelloThread();
        System.out.println(Thread.currentThread().getName() + ": before call start()");
        helloThread.start();
        System.out.println(Thread.currentThread().getName() + ": after call start()");
        System.out.println(Thread.currentThread().getName() + ": main() end");


    }
}
