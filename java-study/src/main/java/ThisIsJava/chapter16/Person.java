package ThisIsJava.chapter16;

public class Person {
    public void action(Workable workable){
        workable.work();
    }
    public void speakAction(Speakable speakable){
        speakable.speak("hi");
    }
    public void ordering(Comparable comparable){
        String a = "John";
        String b = "June";

        int result = comparable.compare(a,b);
        if(result < 0){
            System.out.println("a < b");
        }else if(result == 0){
            System.out.println("a == b");
        }else{
            System.out.println("a > b");
        }
    }
    public Member getMember1(Creatable1 creatable){
        String id = "winter";
        return creatable.create(id);
    }
    public Member getMember2(Creatable2 creatable){
        String id = "winter";
        String name = "win";
        return creatable.create(id,name);
    }
}
