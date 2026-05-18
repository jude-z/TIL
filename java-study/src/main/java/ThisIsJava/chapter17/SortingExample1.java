package ThisIsJava.chapter17;

import java.util.ArrayList;
import java.util.Comparator;

public class SortingExample1 {
    static void main() {
        ArrayList<Student> list = new ArrayList<>();
        list.add(new Student("Jane",30));
        list.add(new Student("Bob",10));
        list.add(new Student("Jeff",20));

        list.stream()
                .sorted()
                .forEach(student -> {
                    System.out.println(student.getName() + " : " + student.getScore());
                });

        System.out.println();
        list.stream()
                .sorted(Comparator.reverseOrder())
                .forEach(student -> {
                    System.out.println(student.getName() + " : " + student.getScore());
                });
    }
}
