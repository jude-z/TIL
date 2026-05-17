package ThisIsJava.chapter15;

import java.util.Stack;

public class StackExample {
    static void main() {
        Stack<Coin> stack = new Stack<Coin>();
        stack.push(new Coin(100));
        stack.push(new Coin(500));
        stack.push(new Coin(300));
        stack.push(new Coin(200));

        while(!stack.isEmpty()){
            Coin coin = stack.pop();
            System.out.println("coin : " + coin.getValue());
        }

    }
}
