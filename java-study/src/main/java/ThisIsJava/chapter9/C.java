package ThisIsJava.chapter9;

public class C {
    C(){
        class D{}
        D d = new D();
    }
    void method(){
        class D{}
        D d = new D();
    }
    void useD(){
        class D{
            int field1 = 1;
            static int field2 = 2;

            D(){
                System.out.println("call constructor");
            }

            void method1(){
                System.out.println("call method1");
            }

            static void method2(){
                System.out.println("call method2");
            }

        }

        D d = new D();
        System.out.println(d.field1);
        d.method1();

        System.out.println(D.field2);
        D.method2();
    }
}
