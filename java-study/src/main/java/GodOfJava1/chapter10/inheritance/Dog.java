package GodOfJava1.chapter10.inheritance;

public class Dog extends Animal{
    @Override
    public void move(){
        System.out.println("Dog move!!");
    }
    @Override
    public void eatFood(){
        System.out.println("Dog eatFood!!");
    }
}
