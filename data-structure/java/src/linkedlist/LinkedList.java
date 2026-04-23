package linkedlist;

import java.util.function.ToIntBiFunction;

public class LinkedList<T> {
    Node<T> head;
    Node<T> before;
    Node<T> cur;
    int numOfData;
    ToIntBiFunction<T,T> comp;

    public LinkedList(){
        Node<T> newNode = new Node<>(null);
        head = newNode;
        numOfData = 0;
        comp = null;
    }

    public void insert(T t){
        Node<T> newNode = new Node<>(t);
        newNode.next = head.next;
        head.next = newNode;
        numOfData++;
    }

    public T first(){
        if(numOfData == 0) return null;
        before = head;
        cur = head.next;
        return cur.data;
    }

    public T next(){
        if(cur.next == null) return null;
        before = cur;
        cur = cur.next;
        return cur.data;
    }

    public void remove(){
        before.next = cur.next;
        numOfData--;
    }

    public int count(){
        return numOfData;
    }

}
