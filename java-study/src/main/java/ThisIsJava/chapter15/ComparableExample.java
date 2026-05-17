package ThisIsJava.chapter15;

import java.util.TreeSet;

public class ComparableExample {
    static void main() {
        TreeSet<Person> treeSet = new TreeSet<>();

        treeSet.add(new Person("john",10));
        treeSet.add(new Person("jane",20));
        treeSet.add(new Person("chris",5));

        for (Person person : treeSet) {
            System.out.println("name : " + person.name + " _age : " + person.age);
        }

        TreeSet<Fruit> fruitTreeSet = new TreeSet<>(new FruitComparator());
        fruitTreeSet.add(new Fruit("apple",100));
        fruitTreeSet.add(new Fruit("peach",200));
        fruitTreeSet.add(new Fruit("melon",50));

        for (Fruit fruit : fruitTreeSet) {
            System.out.println("fruit : "+ fruit.name + " price : "+fruit.price);
        }

    }
}
