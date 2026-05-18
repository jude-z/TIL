package ThisIsJava.chapter17;

import java.util.Arrays;

public class LoopingExample {
    static void main() {
        int[] intArr = {1,2,3,4,5};
        Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .peek(System.out::println);

        int sum = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .peek(System.out::println)
                .sum();

        System.out.println("sum : " + sum);

        Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .forEach(System.out::println);
    }
}
