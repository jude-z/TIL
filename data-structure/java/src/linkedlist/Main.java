package linkedlist;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> linkedList = new LinkedList<Integer>();
        linkedList.insert(1);
        linkedList.insert(2);
        linkedList.insert(3);
        linkedList.insert(4);
        linkedList.insert(5);

        Integer data;
        data = linkedList.first();
        if(data != null) System.out.println(data);
        while((data = linkedList.next()) != null) System.out.println(data);

        data = linkedList.first();
        if(data == 3) linkedList.remove();
        while((data = linkedList.next()) != null){
            if(data == 3){
                linkedList.remove();
            }
        }

        data = linkedList.first();
        if(data != null) System.out.println(data);
        while((data = linkedList.next()) != null) System.out.println(data);



    }
}
