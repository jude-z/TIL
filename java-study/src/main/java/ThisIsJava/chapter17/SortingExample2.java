package ThisIsJava.chapter17;

import java.util.ArrayList;

public class SortingExample2 {
    static void main() {
        ArrayList<StudentNoComparable> list = new ArrayList<>();
        list.add(new StudentNoComparable("John",30));
        list.add(new StudentNoComparable("Bob",10));
        list.add(new StudentNoComparable("Jeff",20));

        list.stream()
                .sorted((s1, s2) -> Integer.compare(s1.getScore(),s2.getScore()))
                .forEach(student -> System.out.println(student.getName() + " : " + student.getScore()));

        System.out.println();
        list.stream()
                .sorted((s1, s2) -> Integer.compare(s2.getScore(),s1.getScore()))
                .forEach(student -> System.out.println(student.getName() + " : " + student.getScore()));
    }
}
