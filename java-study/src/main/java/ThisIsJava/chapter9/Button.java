package ThisIsJava.chapter9;

public class Button {
    static interface ClickListener{
        void onClick();
    }

    private ClickListener clickListener;

    public void setClickListener(ClickListener clickListener){
        this.clickListener = clickListener;
    }
    public void click(){
        this.clickListener.onClick();
    }
}
