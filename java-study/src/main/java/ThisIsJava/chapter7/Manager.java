package ThisIsJava.chapter7;
public non-sealed class Manager extends Person{
    public Manager(String name){
        super(name);
    }

    @Override
    protected void work() {
        System.out.println("manage");
    }
}
