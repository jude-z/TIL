package ThisIsJava.chapter12;

import java.text.SimpleDateFormat;
import java.util.Date;

public class DateExample {
    static void main() {
        Date now = new Date();
        String nowStr = now.toString();
        System.out.println(nowStr);

        SimpleDateFormat sdf = new SimpleDateFormat("yyyy.MM.dd HH:mm:ss");
        String formatStr = sdf.format(now);
        System.out.println(formatStr);

    }
}
