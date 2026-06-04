package linkedlist.singlelinkedlist.tailsinglelinkedlist.dummy;

import exception.NoElementException;
import linkedlist.singlelinkedlist.tailsinglelinkedlist.Node;

public class DummyTailSingleLinkedList <T>{
    private Node<T> tail;
    private Node<T> prev;
    private Node<T> cur;
    private int numOfElements;

    DummyTailSingleLinkedList(){
        this.tail = new Node<>(null);
        this.prev = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        newNode.before = this.tail;
        this.tail = newNode;
        this.numOfElements++;
    }

    public T first(){
        if(this.tail.before == null) throw new NoElementException();
        this.prev = this.tail;
        this.cur = this.tail.before;
        return this.cur.data;
    }
    public T next(){
        if(this.cur.before == null) throw new NoElementException();
        this.prev = this.cur;
        this.cur = this.cur.before;
        return this.cur.data;
    }
    public T remove(){
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        this.prev.before = this.cur.before;
        this.numOfElements--;
        return rData;

    }

    public int count(){
        return this.numOfElements;
    }


}
