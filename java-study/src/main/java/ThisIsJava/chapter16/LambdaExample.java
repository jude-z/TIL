package ThisIsJava.chapter16;

public class LambdaExample {
    static void main() {
        action((x,y) ->{
            int res = x+y;
            System.out.println("result : " + res);
        });

        action((x,y) -> {
            int res = x-y;
            System.out.println("result : " + res);
        });

        Person person = new Person();
        person.action(()->{
            System.out.println("go to work");
            System.out.println("programming");
        });

        person.speakAction((content) -> System.out.println("content : " + content));

        person.action(() -> System.out.println("programming"));
    }
    public static void action(Calculable calculable){
        int x = 10;
        int y = 4;
        calculable.calculate(x,y);
    }
}
