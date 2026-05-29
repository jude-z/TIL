package ThisIsJava.chapter7;

public final class Employee extends Person{
    public Employee(String name) {
        super(name);
    }

    @Override
    protected void work() {
        System.out.println("create product");
    }
}
