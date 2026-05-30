package ThisIsJava.chapter9;

public class Car {
    private Tire tire1 = new Tire();
    private Tire tire2 = new Tire(){
        @Override
        public void roll() {
            System.out.println("tire2 is rolling...");
        }
    };

    public void run1(){
        tire1.roll();
        tire2.roll();
    }

    public void run2(){
        Tire tire = new Tire(){
            @Override
            public void roll() {
                System.out.println("tire2 is rolling..");
            }
        };
        tire.roll();
    }

    public void run3(Tire tire){
        tire.roll();
    }
}
