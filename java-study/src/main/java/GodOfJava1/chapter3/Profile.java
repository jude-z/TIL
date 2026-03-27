package GodOfJava1.chapter3;

public class Profile {
    String name;
    int age;
    static void main() {
        Profile profile = new Profile();
        profile.setName("Jude");
        profile.setAge(32);
        profile.printName();
        profile.printAge();

    }
    public void setName(String name){
        this.name = name;
    }
    public void setAge(int age){
        this.age = age;
    }
    public void printName(){
        System.out.println("My name is " + name);
    }
    public void printAge(){
        System.out.println("My age is " + age);
    }


}
