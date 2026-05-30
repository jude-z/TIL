package ThisIsJava.chapter12;

public class EqulsExample {
    static void main() {
        Member member1 = new Member("member1");
        Member member2 = new Member("member2");
        Member member3 = new Member("member3");

        if(member1.equals(member2)){
            System.out.println("member1 is same as member2");
        }else{
            System.out.println("member1 is not same as member2");
        }

        if(member1.equals(member3)){
            System.out.println("member1 is same as member3");
        }else{
            System.out.println("member1 is not same as member3");
        }
    }
}
