package ThisIsJava.chapter9;

public class D {
    String field = "D-field";

    void method(){
        System.out.println("call D-method");
    }

    class B{
        String field = "B-field";
        void method(){
            System.out.println("call B-method");
        }

        void print(){
            System.out.println(this.field);
            this.method();

            System.out.println(D.this.field);
            D.this.method();
        }

    }

    void useB(){
        B b = new B();
        b.print();
    }
}
