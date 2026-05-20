package ThisIsJava.chapter18;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class ReadExample2 {
    static void main() {
        try{
            InputStream is = new FileInputStream("test1.db");
            byte[] data = new byte[100];

            while(true){
                int num = is.read(data);
                if(num == -1) break;
                for(int i = 0;i<num;i++){
                    System.out.println(data[i]);
                }

            }
            is.close();
        }catch (IOException e){
            e.printStackTrace();
            throw new RuntimeException(e);
        }
    }
}
