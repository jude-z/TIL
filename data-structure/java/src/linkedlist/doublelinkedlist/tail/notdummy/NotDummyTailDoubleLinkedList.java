package linkedlist.doublelinkedlist.tail.notdummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;
import linkedlist.doublelinkedlist.head.notdummy.NotDummyHeadDoubleLinkedList;

public class NotDummyTailDoubleLinkedList <T>{
    private Node<T> tail;
    private Node<T> cur;
    private int numOfElements;

    NotDummyTailDoubleLinkedList(){
        this.tail = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        if(this.tail == null) this.tail = newNode;
        else{
            newNode.before = this.tail;
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.numOfElements++;
    }
    public T first(){
        if(this.tail == null) throw new NoElementException();
        this.cur = this.tail;
        return this.cur.data;
    }
    public T next(){
        if(this.cur.before == null) throw  new NoElementException();
        this.cur = this.cur.before;
        return this.cur.data;
    }
    public T remove(){
        Node<T> rPos = this.cur;
        T rData = this.cur.data;
        if(this.tail == this.cur){
            this.tail = null;
        }else{
            this.cur.next.before = this.cur.before;
            this.cur.before.next = this.cur.next;
        }
        this.cur = this.cur.next.before;
        this.numOfElements--;
        return rData;
    }

    public int count(){
        return this.numOfElements;
    }


}
