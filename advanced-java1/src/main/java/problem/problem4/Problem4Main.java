package problem.problem4;

public class Problem4Main {
    public static void main(String[] args) {
        Thread threadA = new Thread(new RunnableA());
        Thread threadB = new Thread(new RunnableB());
        threadA.start();
        threadB.start();
    }
}
