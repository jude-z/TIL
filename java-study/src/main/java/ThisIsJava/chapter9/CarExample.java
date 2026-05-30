package ThisIsJava.chapter9;

public class CarExample {
    static void main() {
        Car car = new Car();

        car.run1();
        car.run2();
        car.run3(new Tire(){
            @Override
            public void roll() {
                System.out.println("tire3 is rolling..");
            }
        });
    }
}
