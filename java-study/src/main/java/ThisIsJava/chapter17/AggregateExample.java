package ThisIsJava.chapter17;

import java.util.Arrays;
import java.util.Optional;

public class AggregateExample {
    static void main() {
        int[] intArr = {1,2,3,4,5};
        long count = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .count();
        System.out.println("count : " + count);
        System.out.println();

        int sum = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .sum();
        System.out.println("sum : " + sum);
        System.out.println();

        double avg = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .average()
                .getAsDouble();

        System.out.println("avg : " + avg);
        System.out.println();

        int max = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .max()
                .getAsInt();
        System.out.println("max : " + max);
        System.out.println();

        int min = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .min()
                .getAsInt();
        System.out.println("min : " + min);
        System.out.println();

        int first = Arrays.stream(intArr)
                .filter(num -> num % 2 == 0)
                .findFirst()
                .getAsInt();
        System.out.println("first : " + first);

    }
}
