package arraylist;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arrayList = new ArrayList<>();
        arrayList.insert(1);
        arrayList.insert(2);
        arrayList.insert(3);
        arrayList.insert(4);
        arrayList.insert(5);

        Integer data;
        data = arrayList.first();
        if(data != null) System.out.println(data);
        while((data = arrayList.next()) != null){
            System.out.println(data);
            if(data == 3) arrayList.remove();
        }


        data = arrayList.first();
        if(data != null) System.out.println(data);
        while((data = arrayList.next()) != null){
            System.out.println(data);
        }
    }
}
