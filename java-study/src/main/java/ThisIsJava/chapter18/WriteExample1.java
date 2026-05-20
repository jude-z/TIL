package ThisIsJava.chapter18;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;

public class WriteExample1 {
    static void main() {
        try{
            OutputStream os = new FileOutputStream("test.db");
            byte a = 10;
            byte b = 20;
            byte c = 30;

            os.write(a);
            os.write(b);
            os.write(c);

            os.flush();
            os.close();
        } catch (IOException e) {
            e.printStackTrace();
            throw new RuntimeException(e);
        }
    }
}
