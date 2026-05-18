package ThisIsJava.chapter17;

import java.util.Arrays;
import java.util.stream.IntStream;

public class MapExample2 {
    static void main() {
        int[] intArr = {1,2,3,4,5};
        IntStream intStream = Arrays.stream(intArr);
        intStream
                .asDoubleStream()
                .forEach(System.out::println);

        intStream = Arrays.stream(intArr);
        intStream
                .boxed()
                .forEach(value -> System.out.println(value.intValue()));
    }
}
