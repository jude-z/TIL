package linkedlist.circularlinkedlist;

public class CircularLinkedList <T>{
    public Node<T> head;
    public Node<T> tail;
    public Node<T> cur;
    public int elementCount;

    public CircularLinkedList(){}

    public void insert(T data){
        Node<T> newNode = new Node<T>();
        newNode.data = data;

        if(head == null){
            newNode.next = newNode;
            head = newNode;
        }else{
            newNode.next = head;
            head = newNode;
        }
    }
}
