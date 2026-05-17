package ThisIsJava.chapter15;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class HashMapExample {
    static void main() {
        Map<String,Integer> map = new HashMap<>();

        map.put("John",10);
        map.put("jane",20);
        map.put("pool",30);
        map.put("John",20);

        System.out.println("size : " + map.size());

        String key = "jane";
        int val = map.get(key);
        System.out.println("val : " + val);


        Set<String> keySet = map.keySet();
        Iterator<String> iter = keySet.iterator();
        while(iter.hasNext()){
            System.out.println("key : " + iter.next());
        }

        Set<Map.Entry<String,Integer>> entrySet = map.entrySet();
        Iterator<Map.Entry<String,Integer>> iter1 = entrySet.iterator();
        while(iter1.hasNext()){
            Map.Entry<String,Integer> entry = iter1.next();
            System.out.println("key : "  + entry.getKey() + " val : " + entry.getValue());

        }
    }
}
