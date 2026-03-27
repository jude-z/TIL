package GodOfJava1.chapter6;

public class InterestManager {


    public double getInterestRate(int day){
        if(day >= 1 && day <= 90){
            return 0.005;
        }else if(day <= 180){
            return 0.01;
        }else if(day <= 364){
            return 0.02;
        }else{
            return 0.056;
        }
    }
    public double calculateAmount(int day, long amount){
        double interestRate = getInterestRate(day);
        return amount + amount * interestRate;
    }
}
