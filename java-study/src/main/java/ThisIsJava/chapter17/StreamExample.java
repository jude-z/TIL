package ThisIsJava.chapter17;

import java.util.HashSet;
import java.util.Set;
import java.util.stream.Stream;

public class StreamExample {
    static void main() {
        Set<String> set = new HashSet<>();
        set.add("Jane");
        set.add("John");
        set.add("bob");

        Stream<String> stream = set.stream();
        stream.forEach(name -> System.out.println("name : " + name));
    }
}
