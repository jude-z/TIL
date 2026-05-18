package ThisIsJava.chapter17;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class FlatMapExample {
    static void main() {
        ArrayList<String> list1 = new ArrayList<>();
        list1.add("This is Java");
        list1.add("I will be Goat");
        list1.stream()
                .flatMap(data -> Arrays.stream(data.split(" ")))
                .forEach(System.out::println);

        System.out.println();

        List<String> list2 = Arrays.asList("10, 20, 30, 40, 50");
        list2.stream()
                .flatMapToInt(data -> {
                    String[] strArr = data.split(",");
                    int[] intArr = new int[strArr.length];
                    for(int i = 0;i<intArr.length;i++){
                        intArr[i] = Integer.parseInt(strArr[i].trim());
                    }
                    return Arrays.stream(intArr);
                })
                .forEach(System.out::println);
    }
}
