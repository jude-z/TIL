package ThisIsJava.chapter15;

import java.util.HashSet;
import java.util.Iterator;

public class HashSetExample {
    static void main() {
        HashSet<String> set = new HashSet<>();
        set.add("java");
        set.add("jdbc");
        set.add("jsp");
        set.add("java");

        int size = set.size();
        System.out.println("size : "  + size);

        HashSet<Member> set1 = new HashSet<>();
        set1.add(new Member("jane",10));
        set1.add(new Member("jane",10));

        System.out.println("size : " + set1.size());

        Iterator<String> iterator = set.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
        set.remove("jsp");
        iterator = set.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }

    }


}
