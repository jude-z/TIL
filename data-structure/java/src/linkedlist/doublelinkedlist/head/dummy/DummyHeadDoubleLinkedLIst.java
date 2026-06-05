package linkedlist.doublelinkedlist.head.dummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;

public class DummyHeadDoubleLinkedLIst <T>{
    private Node<T> head;
    private Node<T> cur;
    private int numOfElements;

    public DummyHeadDoubleLinkedLIst(){
        this.head = new Node<>(null);
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        newNode.next = this.head;
        this.head = newNode;
        this.numOfElements++;
    }
    public T first(){
        if(this.head.next == null) throw new NoElementException();
        this.cur = this.head.next;
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
        this.cur.before.next = this.cur.next;
        this.numOfElements--;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }
}
