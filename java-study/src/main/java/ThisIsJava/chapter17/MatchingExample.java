package ThisIsJava.chapter17;

import java.util.Arrays;

public class MatchingExample {
    static void main() {
        int[] intArr = {1,2,3,4,5};
        boolean result = Arrays.stream(intArr)
                .allMatch(num -> num % 2 == 0);
        System.out.println("all % 2 == 0 ?  : " + result);

        System.out.println();
        result = Arrays.stream(intArr)
                .anyMatch(num -> num % 3 == 0);
        System.out.println("any % 3 == 0 ? : " + result);

        System.out.println();

        result = Arrays.stream(intArr)
                .noneMatch(num -> num % 3 == 0);
        System.out.println("none % 3 == 0 ? : " + result);


    }
}
