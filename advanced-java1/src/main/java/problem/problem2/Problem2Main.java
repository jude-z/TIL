package problem.problem2;

public class Problem2Main {
    public static void main(String[] args) {
        Thread thread = new Thread(new CounterRunnable());
        thread.setName("counter");
        thread.start();
    }
}
