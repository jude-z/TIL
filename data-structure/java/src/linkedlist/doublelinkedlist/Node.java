package linkedlist.doublelinkedlist;

public class Node <T>{
    public T data;
    public Node<T> next;
    public Node<T> before;
    public Node(T data){
        this.data = data;
        this.next = null;
        this.before = null;
    }
}
