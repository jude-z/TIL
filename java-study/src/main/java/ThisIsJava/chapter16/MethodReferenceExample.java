package ThisIsJava.chapter16;

public class MethodReferenceExample {
    static void main() {
        Person person = new Person();
        person.ordering(String::compareToIgnoreCase);
    }
}
