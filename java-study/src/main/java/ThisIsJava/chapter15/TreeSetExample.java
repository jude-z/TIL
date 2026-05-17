package ThisIsJava.chapter15;

import java.util.NavigableSet;
import java.util.TreeSet;

public class TreeSetExample {
    static void main() {
        TreeSet<Integer> scores = new TreeSet<>();

        scores.add(1);
        scores.add(2);
        scores.add(3);
        scores.add(4);
        scores.add(5);
        scores.add(6);

        for (Integer score : scores) {
            System.out.println("score : "  + score);
        }
        System.out.println();

        System.out.println("first : " + scores.first());
        System.out.println("last : " + scores.last());
        System.out.println("scores lower 3 : " + scores.lower(3));
        System.out.println("scores higher 3 : " + scores.higher(3));
        System.out.println("scores flower 3 : " + scores.floor(3));
        System.out.println("scores ceiling 3 : " + scores.ceiling(3));


        NavigableSet<Integer> descendingSet = scores.descendingSet();
        for (Integer score : descendingSet) {
            System.out.println("score : " + score);
        }
        System.out.println();

        NavigableSet<Integer> rangeSet1 = scores.tailSet(3, true);
        for (Integer score : rangeSet1) {
            System.out.println("score : " + score);
        }
        System.out.println();
        NavigableSet<Integer> rangeSet2 = scores.subSet(3, true, 5, true);
        for (Integer score : rangeSet2) {
            System.out.println("score : " + score);
        }
    }
}
