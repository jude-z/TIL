package ThisIsJava.chapter17;

import java.util.Arrays;
import java.util.List;

public class ReductionExample {
    static void main() {
        List<Student> list = Arrays.asList(
                new Student("John", 30),
                new Student("Bob", 20),
                new Student("Jeff", 50)
        );

        int sum1 = list.stream()
                .mapToInt(Student::getScore)
                .sum();
        System.out.println("sum : " + sum1);

        Integer sum2 = list.stream()
                .map(Student::getScore)
                .reduce((a, b) -> a + b)
                .get();
        System.out.println("sum : " + sum2);


    }
}
