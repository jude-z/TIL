package linkedlist.singlelinkedlist.headsinglelinkedlist.notdummy;

import exception.NoElementException;
import linkedlist.singlelinkedlist.headsinglelinkedlist.Node;

public class NotDummyHeadSingleLInkedList<T> {
    Node<T> head;
    Node<T> prev;
    Node<T> cur;
    int numOfElements;

    NotDummyHeadSingleLInkedList(){
        this.head = null;
        this.prev = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        if(this.head == null) this.head = newNode;
        else{
            newNode.next = this.head;
            this.head = newNode;
        }
        this.numOfElements++;
    }
    public T first(){
        if(this.head == null) throw new NoElementException();
        this.prev = null;
        this.cur = this.head;
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
        if(this.cur == this.head){
            this.head = this.cur.next;
        }else{
            this.prev.next = this.cur.next;
        }
        this.numOfElements--;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }

}
