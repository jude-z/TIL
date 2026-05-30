package ThisIsJava.chapter9;

public class ButtonExample {
    static void main() {
        Button button = new Button();
        class OkClickListener implements Button.ClickListener{

            @Override
            public void onClick() {
                System.out.println("click ok!!");
            }
        }

        class CancelListener implements Button.ClickListener{

            @Override
            public void onClick() {
                System.out.println("click cancel!!");
            }
        }

        OkClickListener okClickListener = new OkClickListener();
        CancelListener cancelListener = new CancelListener();

        button.setClickListener(okClickListener);
        button.click();

        button.setClickListener(cancelListener);
        button.click();
    }
}
