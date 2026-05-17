package ThisIsJava.chapter17;

import java.util.stream.IntStream;

public class StreamExample3 {
    public static int sum = 0;
    static void main() {
        IntStream stream = IntStream.rangeClosed(1, 100);
        stream.forEach(value -> sum += value);
        System.out.println("sum : " + sum);
    }

}
