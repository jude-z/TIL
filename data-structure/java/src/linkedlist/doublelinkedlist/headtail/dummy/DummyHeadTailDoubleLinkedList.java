package linkedlist.doublelinkedlist.headtail.dummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;
import linkedlist.doublelinkedlist.tail.dummy.DummyTailDoubleLinkedList;

public class DummyHeadTailDoubleLinkedList <T>{
    private Node<T> head;
    private Node<T> tail;
    private Node<T> cur;
    private int numOfData;

    DummyHeadTailDoubleLinkedList(){
        this.head = new Node<>(null);
        this.tail = new Node<>(null);
        this.head.next = this.tail;
        this.tail.before = this.head;
        this.cur = null;
        this.numOfData = 0;
    }
    public void headInsert(T data){
        Node<T> newNode = new Node<>(data);
        newNode.before = this.head;
        newNode.next = this.head.next;
        this.head.next.before = newNode;
        this.head.next = newNode;
        this.numOfData++;
    }
    public void tailInsert(T data){
        Node<T> newNode = new Node<>(data);
        newNode.next = this.tail;
        newNode.before = this.tail.before;
        this.tail.before.next = newNode;
        this.tail.before = newNode;
        this.numOfData++;
    }

    public T firstHead(){
        if(this.head.next == null) throw new NoElementException();
        this.cur = this.head.next;
        return this.cur.data;
    }
    public T firstTail(){
        if(this.tail.before == null) throw new NoElementException();
        this.cur = this.tail.before;
        return this.cur.data;
    }
    public T next(){
        if(this.cur.next != this.tail) throw new NoElementException();
        this.cur = this.cur.next;
        return this.cur.data;
    }
    public T prev(){
        if(this.cur.before != this.head) throw new NoElementException();
        this.cur = this.cur.before;
        return this.cur.data;
    }
    public T remove(){
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        this.cur.before = this.cur.next;
        this.cur.next.before = this.cur.before;
        this.numOfData--;
        return rData;
    }
    public int count(){
        return this.numOfData;
    }
}
