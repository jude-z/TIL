package linkedlist.singlelinkedlist.tailsinglelinkedlist.notdummy;

import exception.NoElementException;
import linkedlist.singlelinkedlist.headsinglelinkedlist.notdummy.NotDummyHeadSingleLInkedList;
import linkedlist.singlelinkedlist.tailsinglelinkedlist.Node;

public class NotDummyTailSingleLinkedList <T>{
    private Node<T> tail;
    private Node<T> prev;
    private Node<T> cur;
    private int numOfElements;

    public NotDummyTailSingleLinkedList(){
        this.tail = null;
        this.prev = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void insert(T data){
        Node<T> newNode = new Node<>(data);
        if(this.tail == null){
            this.tail = newNode;
        }else{
            newNode.before = this.tail;
            this.tail = newNode;
        }
        this.numOfElements++;
    }
    public T first(){
        if(this.tail == null) throw new NoElementException();
        this.prev = null;
        this.cur = this.tail;
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
        if(this.cur == this.tail){
            this.tail = this.cur.before;
        }else{
            this.prev.before = this.cur.before;
        }
        this.numOfElements--;
        return rData;
    }

    public int count(){
        return this.numOfElements;
    }

}
