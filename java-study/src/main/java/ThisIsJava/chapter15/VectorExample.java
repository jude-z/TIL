package ThisIsJava.chapter15;

import java.util.Vector;

public class VectorExample {
    static void main() throws InterruptedException {
        Vector<Board> list = new Vector<>();
        Thread thread1 = new Thread(new Runnable() {
            @Override
            public void run() {
                for(int i = 0;i<1000;i++){
                    list.add(new Board("subject" + i,"content" + i,"writer" + i));
                }
            }
        });

        Thread thread2 = new Thread(new Runnable() {
            @Override
            public void run() {
                for(int i = 1000;i<2000;i++){
                    list.add(new Board("subject" + i,"content" + i,"writer" + i));
                }
            }
        });
        thread1.start();
        thread2.start();
        thread1.join();
        thread2.join();

        int size = list.size();
        System.out.println("size : " + size);
    }
}
