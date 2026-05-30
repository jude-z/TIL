package ThisIsJava.chapter12;

import java.util.StringTokenizer;

public class StringTokenizerExample {
    static void main() {
        String data = "Jane&Jeff&John";
        String[] arr = data.split("&");
        for(int i = 0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
        System.out.println();
        StringTokenizer tokenizer = new StringTokenizer(data, "&");
        while(tokenizer.hasMoreTokens()){
            System.out.println(tokenizer.nextToken());
        }

    }
}
