package GodOfJava1.chapter4;

public class ProfilePrint {
    byte age;
    String name;
    boolean isMarried;
    public void setAge(byte age){
        this.age = age;
    }
    public byte getAge(){
        return age;
    }
    public void setName(String name){
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public void setMarried(boolean isMarried){
        this.isMarried = isMarried;
    }
    public boolean isMarried(){
        return isMarried;
    }

    static void main() {
        ProfilePrint profilePrint = new ProfilePrint();
        profilePrint.setName("Jude");
        profilePrint.setAge((byte)32);
        profilePrint.setMarried(false);

    }
}
