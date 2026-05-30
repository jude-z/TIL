package ThisIsJava.chapter9;

public class Home {
    RemoteControl rc = new RemoteControl() {
        @Override
        public void turnOn() {
            System.out.println("turn on TV");
        }

        @Override
        public void turnOff() {
            System.out.println("turn off TV");
        }
    };

    public void use1(){
        rc.turnOn();
        rc.turnOff();
    }

    public void use2(){
        RemoteControl rc = new RemoteControl() {
            @Override
            public void turnOn() {
                System.out.println("turn on air-conditioner");
            }

            @Override
            public void turnOff() {
                System.out.println("turn off air-conditioner");
            }
        };

        rc.turnOn();
        rc.turnOff();
    }

    public void use3(RemoteControl remoteControl){
        remoteControl.turnOn();
        remoteControl.turnOff();
    }
}
