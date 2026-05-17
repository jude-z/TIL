package ThisIsJava.chapter17;

import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StreamExample2 {
    static void main() {
        String[] strArr = {"Jane","John","Jeff"};
        Stream<String> stream = Arrays.stream(strArr);
        stream.forEach(System.out::println);
        System.out.println();

        int[] intArr = {1,2,3,4,5};
        IntStream intStream = Arrays.stream(intArr);
        intStream.forEach(System.out::println);
    }
}
