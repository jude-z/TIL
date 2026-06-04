package linkedlist.singlelinkedlist.tailsinglelinkedlist;

public class Node <T>{
    public T data;
    public Node<T> before;

    public Node(T data){
        this.data = data;
        this.before = null;
    }
}
