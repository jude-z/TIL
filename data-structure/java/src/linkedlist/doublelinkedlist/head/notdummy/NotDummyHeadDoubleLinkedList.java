package linkedlist.doublelinkedlist.head.notdummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;

public class NotDummyHeadDoubleLinkedList <T>{
    private Node<T> head;
    private Node<T> cur;
    private int numOfElements;

    NotDummyHeadDoubleLinkedList(){
        this.head = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        if(this.head == null){
            this.head = newNode;
        }else{
            newNode.next = this.head;
        }
        this.numOfElements++;
    }
    public T first(){
        if(this.head == null) throw new NoElementException();
        this.cur = this.head;
        return this.cur.data;

    }

    public T next(){
        if(this.cur.next == null) throw new NoElementException();
        this.cur = this.cur.next;
        return this.cur.data;
    }

    public T remove(){
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        if(this.cur == this.head){
            this.head = null;
        }else{
            this.cur.before.next = this.cur.next;
        }
        this.numOfElements--;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }
}
