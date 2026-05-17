package ThisIsJava.chapter17;


import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

public class ParallelStreamExample {
    static void main() {
        List<String> list = new ArrayList<>();
        list.add("Jane");
        list.add("John");
        list.add("Bob");
        list.add("Carmack");
        list.add("Jeff");

        Stream<String> stream = list.parallelStream();
        stream.forEach(name -> {
            System.out.println("name : " + Thread.currentThread().getName());
        });
    }
}
