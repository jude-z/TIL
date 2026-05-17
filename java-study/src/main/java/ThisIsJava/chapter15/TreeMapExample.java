package ThisIsJava.chapter15;

import java.util.Map;
import java.util.Map.Entry;
import java.util.NavigableMap;
import java.util.Set;
import java.util.TreeMap;

public class TreeMapExample {
    static void main() {

        TreeMap<String,Integer> treeMap = new TreeMap<>();

        treeMap.put("apple",10);
        treeMap.put("forever",60);
        treeMap.put("description",40);
        treeMap.put("ever",50);
        treeMap.put("zoo",80);
        treeMap.put("base",20);
        treeMap.put("guess",70);
        treeMap.put("cherry",30);

        Set<Entry<String, Integer>> entrySet = treeMap.entrySet();
        for (Entry<String, Integer> entry : entrySet) {
            System.out.println("key : " + entry.getKey() + " value : " + entry.getValue());
        }
        System.out.println();

        Entry<String,Integer> entry;
        entry = treeMap.firstEntry();
        System.out.println("first entry - key : " + entry.getKey() + " value : " + entry.getValue());
        System.out.println();

        entry = treeMap.lastEntry();
        System.out.println("last entry - key : "  + entry.getKey() + " value : " + entry.getValue());
        System.out.println();

        entry = treeMap.lowerEntry("ever");
        System.out.println("lower entry ever - key : " + entry.getKey() + "value : " + entry.getValue());
        System.out.println();

        NavigableMap<String, Integer> descendingMap = treeMap.descendingMap();
        Set<Entry<String, Integer>> entrySet1 = descendingMap.entrySet();
        for (Entry<String, Integer> descendingEntry : entrySet1) {
            System.out.println("key : " + descendingEntry.getKey() + " value : " + descendingEntry.getValue());

        }
        System.out.println();

        NavigableMap<String, Integer> rangeMap = treeMap.subMap("c", true, "h", false);
        Set<Entry<String, Integer>> entrySet2 = rangeMap.entrySet();
        for (Entry<String, Integer> rangeEntry : entrySet2) {
            System.out.println("key : " + rangeEntry.getKey() + " value : " + rangeEntry.getValue());
        }


    }
}
