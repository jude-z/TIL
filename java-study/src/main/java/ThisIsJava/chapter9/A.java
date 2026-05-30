package ThisIsJava.chapter9;

public class A {
    class B{
        int field1 = 1;
        static int field2 = 2;

        public B() {
            System.out.println("call constructor B");
        }
        void method1(){
            System.out.println("call method-1");
        }
        static void method2(){
            System.out.println("call method-2");
        }
    }
    void useB(){
        B b = new B();
        System.out.println(b.field1);
        b.method1();

        System.out.println(B.field2);
        B.method2();
    }
}
