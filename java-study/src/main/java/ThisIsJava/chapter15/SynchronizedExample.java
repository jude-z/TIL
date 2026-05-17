package ThisIsJava.chapter15;

import java.util.Collections;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.Map;

public class SynchronizedExample {
    static void main() throws InterruptedException {
        Map<Integer, String> map = Collections.synchronizedMap(new HashMap<>());

        Thread threadA = new Thread(() -> {
            for (int i = 1; i <= 1000; i++) {
                map.put(i, "content - " + i);
            }
        });

        Thread threadB = new Thread(() -> {
            for (int i = 1001; i <= 2000; i++) {
                map.put(i, "content - " + i);
            }
        });
        threadA.start();
        threadB.start();
        threadA.join();
        threadB.join();

        int size = map.size();
        System.out.println("size : " + size);
    }
}
