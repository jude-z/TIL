package stack.array;


import exception.NoElementException;

public class ArrayList <T>{
    private T[] arr;
    private int size;
    private int cur;
    private int capacity;

    ArrayList(){
        this.capacity = 100;
        this.arr = (T[])new Object[this.capacity];
        this.cur = -1;
        this.size = 0;
    }
    public void insert(T data){
        this.arr[this.size++] = data;
    }
    public T first(){
        if(this.size == 0) throw new NoElementException();
        return this.arr[++this.cur];
    }
    public T next(){
        if(this.cur + 1 >= this.size) throw new NoElementException();
        return this.arr[++this.cur];
    }
    public T remove(){
        T rData = this.arr[this.cur];
        for(int i = cur;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        this.cur--;
        this.size--;
        return rData;
    }
    public int count(){
        return this.size;
    }
}
