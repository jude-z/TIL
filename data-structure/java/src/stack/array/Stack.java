package stack.array;

public class Stack <T>{
    private ArrayList<T> arrayList;

    Stack(){
        this.arrayList = new ArrayList<>();
    }
    public void push(T data){
        this.arrayList.insert(data);
    }
    public T peek(){
        return null;
    }
    public T pop(){
        return null;
    }
    public boolean empty(){
        return this.arrayList.count() == 0;
    }
}
