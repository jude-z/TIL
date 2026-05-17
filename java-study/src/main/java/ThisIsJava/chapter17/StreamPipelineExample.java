package ThisIsJava.chapter17;

import java.nio.file.Files;
import java.util.Arrays;
import java.util.List;
import java.util.stream.IntStream;

public class StreamPipelineExample {
    static void main() {
        List<Student> list = Arrays.asList(
                new Student("John", 10),
                new Student("Bob", 20),
                new Student("Jeff", 30)
        );
        double avg = list.stream()
                .mapToInt(Student::getScore)
                .average()
                .getAsDouble();
        System.out.println("avg : " + avg);

    }
}
