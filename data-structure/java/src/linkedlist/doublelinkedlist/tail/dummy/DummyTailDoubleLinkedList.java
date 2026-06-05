package linkedlist.doublelinkedlist.tail.dummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;
import linkedlist.doublelinkedlist.head.dummy.DummyHeadDoubleLinkedLIst;

public class DummyTailDoubleLinkedList <T>{
    private Node<T> tail;
    private Node<T> cur;
    private int numOfElements;

    DummyTailDoubleLinkedList(){
        this.tail = new Node<>(null);
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        this.tail.before = newNode;
        newNode.next = this.tail;
        this.numOfElements++;
    }

    public T first(){
        if(this.tail.before == null) throw new NoElementException();
        this.cur = this.tail.before;
        return this.cur.data;
    }
    public T next(){
        if(this.cur.before == null) throw new NoElementException();
        this.cur = this.cur.before;
        return this.cur.data;
    }
    public T remove(){
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        this.cur.next.before = this.cur.before;
        this.cur.before.next = this.cur.next;
        this.numOfElements--;
        this.cur = this.cur.before;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }
}
