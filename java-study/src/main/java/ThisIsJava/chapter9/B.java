package ThisIsJava.chapter9;

public class B {
    static class C{
        int field1 = 1;
        static int field2 = 2;
        C(){
            System.out.println("call constructor C");
        }
        void method1(){
            System.out.println("call method1");
        }
        static void method2(){
            System.out.println("call method2");
        }
    }
    C field = new C();
    static C field2 = new C();
    B(){
        C c  = new C();
    }
    void method1(){
        C c = new C();
    }
    static void method2(){
        C c = new C();
    }
}
