package ThisIsJava.chapter18;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class ReadExample1 {
    static void main() {
        try{

            InputStream is = new FileInputStream("test.db");
            while(true){
                int data = is.read();
                if(data == -1) break;
                System.out.println(data);
            }
        }catch (IOException e ){
            e.printStackTrace();
            throw new RuntimeException(e);
        }

    }
}
