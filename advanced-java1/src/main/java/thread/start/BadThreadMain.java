package thread.start;

public class BadThreadMain {
    public static void main(String[] args) {
        System.out.println(Thread.currentThread().getName() + ": main() start");
        HelloThread helloThread = new HelloThread();
        System.out.println(Thread.currentThread().getName() + ": before call run()");
        helloThread.run();
        System.out.println(Thread.currentThread().getName() + ": after call run()");
        System.out.println(Thread.currentThread().getName() + ": main() end");
    }
}
