package ThisIsJava.chapter15;

import java.util.Hashtable;
import java.util.Map;

public class HashTableExample {
    static void main() throws InterruptedException {
        Map<String,Integer> map = new Hashtable<>();
        Thread thread1 = new Thread(new Runnable() {
            @Override
            public void run() {
                for(int i= 1;i<=1000;i++){
                    map.put(String.valueOf(i),i);
                }
            }
        });

        Thread thread2 = new Thread(new Runnable() {
            @Override
            public void run() {
                for(int i= 1001;i<=2000;i++){
                    map.put(String.valueOf(i),i);
                }
            }
        });

        thread1.start();
        thread2.start();
        thread1.join();
        thread2.join();

        System.out.println("size : "  + map.size());
    }
}
