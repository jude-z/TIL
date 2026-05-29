package ThisIsJava.chapter7;

public sealed class Person permits Employee, Manager{
    protected Person(String name){
        this.name = name;
    }
    private String name;
    protected void work(){
        System.out.println("work is not determined");
    }
}
