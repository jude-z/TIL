package ThisIsJava.chapter9;

public class AExample {
    static void main() {
        A a = new A();
        A.B b = a.new B();
        a.useB();
        System.out.println(b.field1);
        b.method1();

        System.out.println(A.B.field2);
        A.B.method2();


    }
}
