package linkedlist;

public class Node <T>{
    public T data;
    public Node<T> next;

    T getData(){
        return data;
    }
    public Node(T t){
        data = t;
    }
}
