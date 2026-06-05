package linkedlist.doublelinkedlist.headtail.notdummy;

import exception.NoElementException;
import linkedlist.doublelinkedlist.Node;
import linkedlist.doublelinkedlist.head.notdummy.NotDummyHeadDoubleLinkedList;

public class NotDummyHeadTailDoubleLinkedList <T>{
    private Node<T> head;
    private Node<T> tail;
    private Node<T> cur;
    private int numOfElements;

    NotDummyHeadTailDoubleLinkedList(){
        this.cur = null;
        this.tail = null;
        this.cur = null;
        this.numOfElements = 0;
    }

    public void headInsert(T data){
        Node<T> newNode = new Node<>(data);
        if(empty()){
            this.head = newNode;
            this.tail = newNode;
            this.head.next = this.tail;
            this.tail.before = this.head;
        }else{
            newNode.next = this.head;
            this.head.before = newNode;
            this.head = newNode;
        }
        this.numOfElements++;
    }
    public void tailInsert(T data){
        Node<T> newNode = new Node<>(data);
        if(empty()){
            this.head = newNode;
            this.tail = newNode;
            this.head.next = this.tail;
            this.tail.before = this.head;
        }else{
            newNode.before = this.tail;
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.numOfElements++;
    }
    public T remove(){
        if(empty()) throw new NoElementException();
        Node<T> rPos = this.cur;
        T rData = rPos.data;
        if(count() == 1){
            this.head = null;
            this.tail = null;
            this.cur = null;
        }else{
            if(this.cur == this.head){
                this.head = this.cur.next;
                this.head.before = null;
            }else if(this.cur == this.tail){
                this.tail = this.cur.before;
                this.tail.next = null;
            }else{
                this.cur.before.next = this.cur.next;
                this.cur.next.before = this.cur.before;
            }
        }
        this.numOfElements--;
        return rData;
    }
    public int count(){
        return this.numOfElements;
    }
    private boolean empty(){
        return this.numOfElements == 0;
    }

}
