package ThisIsJava.chapter9;

public class BExample {
    static void main() {
        B.C c = new B.C();
        System.out.println(c.field1);
        c.method1();
        System.out.println(B.C.field2);

        System.out.println(B.C.field2);
        B.C.method2();

    }
}
