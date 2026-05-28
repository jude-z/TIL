package util;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public abstract class MyLogger {
    private static final DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss.SSS");
    public static void log(Object obj){
            String time = LocalDateTime.now().format(formatter);
            System.out.printf("%s [%9s] %s\n",time,Thread.currentThread().getName(),obj);

    }
    public static void sleep(long millis){
        try {
            Thread.sleep(millis);
        } catch (InterruptedException e) {
            log("interrupt : " + e.getMessage());
            throw new RuntimeException(e);
        }
        ;
    }

}
