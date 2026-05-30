package ThisIsJava.chapter9;

public class HomeExample {
    static void main() {
        Home home = new Home();
        home.use1();
        home.use2();
        home.use3(new RemoteControl() {
            @Override
            public void turnOn() {
                System.out.println("turn on hitter");
            }

            @Override
            public void turnOff() {
                System.out.println("tur off hitter");
            }
        });
    }
}
