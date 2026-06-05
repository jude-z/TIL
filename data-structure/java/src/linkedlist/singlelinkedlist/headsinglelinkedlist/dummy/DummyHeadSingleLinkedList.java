package linkedlist.singlelinkedlist.headsinglelinkedlist.dummy;

import exception.NoElementException;
import linkedlist.singlelinkedlist.headsinglelinkedlist.Node;

public class DummyHeadSingleLinkedList<T>{
    Node<T> head;
    Node<T> prev;
    Node<T> cur;
    int numOfElements;

    DummyHeadSingleLinkedList(){
        this.head = new Node<>(null);
        this.prev = null;
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
        this.prev = this.head;
        this.cur = this.head.next;
        return this.cur.data;
    }
    public T next(){
        if(this.cur.next == null) throw new NoElementException();
        this.prev = this.cur;
        this.cur = this.cur.next;
        return this.cur.data;
    }
    public T remove(){
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        this.prev.next = this.cur.next;
        this.numOfElements--;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }

}
