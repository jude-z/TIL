package GodOfJava1.chapter8;

public class Student {
    String name;
    String address;
    String phone;
    String email;
    public Student(String name){
        this.name = name;
    }
    public Student(String name, String address, String phone, String email){
        this.name = name;
        this.address = address;
        this.phone = phone;
        this.email = email;
    }
    @Override
    public String toString(){
        return name + " " + address + " " + address + " " + email;
    }
}
