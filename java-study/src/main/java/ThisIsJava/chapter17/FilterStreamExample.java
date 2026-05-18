package ThisIsJava.chapter17;

import java.util.ArrayList;

public class FilterStreamExample {
    static void main() {
        ArrayList<String> list = new ArrayList<>();
        list.add("Jane");
        list.add("John");
        list.add("Jeff");
        list.add("Jeff");

        list.stream()
                .distinct()
                .forEach(name -> System.out.println("name : " + name));

        list.stream()
                .filter(name -> name.endsWith("f"))
                .forEach(name -> System.out.println("name : " + name));
    }
}
