package ThisIsJava.chapter15;

import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        ArrayList<Board> list = new ArrayList<>();
        list.add(new Board("subject1", "content1", "writer1"));
        list.add(new Board("subject2", "content2", "writer2"));
        list.add(new Board("subject3", "content3", "writer3"));
        list.add(new Board("subject4", "content4", "writer4"));
        list.add(new Board("subject5", "content5", "writer5"));
        list.add(new Board("subject6", "content6", "writer6"));

        int size = list.size();
        System.out.println("size : " + size);
        Board board = list.get(2);
        System.out.println(board);
        for (int i = 0; i < size; i++) {
            System.out.println(list.get(i));
        }
        list.remove(2);
        list.remove(2);
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
