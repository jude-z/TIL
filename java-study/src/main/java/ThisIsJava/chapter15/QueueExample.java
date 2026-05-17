package ThisIsJava.chapter15;

import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {

    static void main() {
        Queue<Message> queue = new LinkedList<>();

        queue.offer(new Message("sendMail","jane"));
        queue.offer(new Message("sendSMS","bob"));
        queue.offer(new Message("sendKakao","phill"));

        while(!queue.isEmpty()){
            Message message = queue.poll();
            System.out.println("command : " + message.command + " to : " + message.to );
        }
    }
}
