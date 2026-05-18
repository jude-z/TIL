package ThisIsJava.chapter17;

import java.util.ArrayList;

public class MapExample1 {
    static void main() {
        ArrayList<Student> list = new ArrayList<>();
        list.add(new Student("Jane",10));
        list.add(new Student("Jeff",20));
        list.add(new Student("Bob",30));

        list.stream()
                .mapToInt(Student::getScore)
                .forEach(score -> System.out.println("score : " + score));
    }
}
