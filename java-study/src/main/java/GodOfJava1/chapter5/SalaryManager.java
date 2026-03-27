package GodOfJava1.chapter5;

public class SalaryManager {
    static void main() {

    }
    public double getMonthlySalary(int yearlySalary){
        double monthSalary = yearlySalary / 12.0;
        return monthSalary - calculateTax(monthSalary);
    }
    public double calculateTax(double monthSalary){
        return monthSalary * (0.125 + 0.081 + 0.135);

    }
}
