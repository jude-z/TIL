package arraylist;

public class ArrayList<T>{
    private T[] data;
    private int size;
    private int capacity;
    private int cur;
    private int numOfElements;

    public ArrayList(){
        this.data = (T[])new Object[100];
        this.size = 0;
        this.capacity = 100;
        this.cur = -1;
        this.numOfElements = 0;
    }

    public void insert(T t){
        if(isFull()){
            grow();
        }
        this.data[size++] = t;
        this.numOfElements++;
    }

    public T first() {
        if(this.numOfElements == 0) return null;
        this.cur = -1;
        return data[++cur];
    }

    public T next() {
        if(cur == size-1) return null;
        return data[++cur];
    }

    public T remove(){
        T rdata = data[cur];
        for(int i = cur+1;i<size;i++){
            data[i-1] = data[i];
        }
        this.cur--;
        this.size--;
        return rdata;
    }

    private void grow(){
        this.capacity *= 2;
        T[] newData = (T[])new Object[capacity];
        for(int i = 0;i<size;i++){
            newData[i] = data[i];
        }
        this.data = newData;
    }

    public boolean isFull(){
        return size == capacity;
    }

}
