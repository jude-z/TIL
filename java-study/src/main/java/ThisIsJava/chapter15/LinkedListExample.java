package ThisIsJava.chapter15;

import com.sun.source.tree.UsesTree;

import java.util.ArrayList;
import java.util.LinkedList;

public class LinkedListExample {
    static void main() {
        ArrayList<String> list1 = new ArrayList<>();
        long startTime, endTime;
        startTime = System.nanoTime();
        for(int i = 0;i<10000;i++){
            list1.add(String.valueOf(i));
        }
        endTime = System.nanoTime();
        System.out.println(endTime - startTime);

        LinkedList<String> list2 = new LinkedList<>();
        startTime = System.nanoTime();
        for(int i = 0;i<10000;i++){
            list2.add(String.valueOf(i));
        }
        endTime = System.nanoTime();
        System.out.println(endTime - startTime);

    }
}
