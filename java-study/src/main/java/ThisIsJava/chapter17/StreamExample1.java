package ThisIsJava.chapter17;

import java.util.ArrayList;

public class StreamExample1 {
    static void main() {
        ArrayList<Product> list = new ArrayList<>();
        for(int i= 1;i<=5;i++){
            list.add(new Product(i, "product-" + i,"jude-company",(int)(10000*Math.random())));
        }

        list.stream()
                .forEach(
                        System.out::println
                );
    }
}
