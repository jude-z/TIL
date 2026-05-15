package ThisIsJava.chapter15;

import java.util.Objects;

public class Member {
    private String name;
    private int age;

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Member member = (Member) o;
        return age == member.age && Objects.equals(name, member.name);
    }

    @Override
    public int hashCode() {
        return Objects.hash(name, age);
    }

    public Member(String name, int age) {
        this.name = name;
        this.age = age;
    }
}
