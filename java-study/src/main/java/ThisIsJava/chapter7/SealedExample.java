package ThisIsJava.chapter7;

public class SealedExample {
    static void main() {
        Person person = new Person("jude");
        Employee employee = new Employee("jude");
        Manager manager = new Manager("jude");
        person.work();
        employee.work();
        manager.work();

    }
}
