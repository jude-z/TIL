package ThisIsJava.chapter17;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;

public class CollectExample {
    static void main() {
        ArrayList<StudentSex> list = new ArrayList<>();
        list.add(new StudentSex("John","male",60));
        list.add(new StudentSex("Jane","female",70));
        list.add(new StudentSex("Bob","male",80));
        list.add(new StudentSex("Anna","female",90));

        List<StudentSex> maleList = list.stream()
                .filter(student -> student.getSex().equals("male"))
                .collect(Collectors.toList());

        maleList.stream()
                .forEach(System.out::println);

        List<StudentSex> femaleList = list.stream()
                .filter(student -> student.getSex().equals("female"))
                .collect(Collectors.toList());
        femaleList.stream()
                .forEach(System.out::println);

        Map<String, Integer> stduentMap = list.stream()
                .collect(Collectors.toMap(
                        student -> student.getName(),
                        student -> student.getScore()
                ));

        Set<Map.Entry<String, Integer>> entrySet = stduentMap.entrySet();
        entrySet.stream()
                .forEach(entry -> {
                    System.out.println("name : "  + entry.getKey() + " - score : " + entry.getValue());
                });

        Map<String, List<StudentSex>> map = list.stream()
                .collect(Collectors.groupingBy(student -> student.getSex()));

        List<StudentSex> maleList1 = map.get("male");
        List<StudentSex> femaleList1 = map.get("female");
        maleList1.stream()
                .forEach(System.out::println);
        femaleList1.stream()
                .forEach(System.out::println);
    }

}
