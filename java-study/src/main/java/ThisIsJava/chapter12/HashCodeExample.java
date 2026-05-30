package ThisIsJava.chapter12;

public class HashCodeExample {
    static void main() {
        Student s1 = new Student(1, "Jane");
        Student s2 = new Student(1, "Jane");

        if(s1.equals(s2)){
            System.out.println("s1 == s2");
        }else{
            System.out.println("s1 != s2");
        }
    }
}
