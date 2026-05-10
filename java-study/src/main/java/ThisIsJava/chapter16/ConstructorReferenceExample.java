package ThisIsJava.chapter16;

public class ConstructorReferenceExample {
    static void main() {
        Person person = new Person();

        Member member1 = person.getMember1(Member::new);
        System.out.println(member1);

        Member member2 = person.getMember2(Member::new);
        System.out.println(member2);
    }
}
