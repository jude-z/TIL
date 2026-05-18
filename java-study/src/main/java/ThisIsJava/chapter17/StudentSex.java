package ThisIsJava.chapter17;

public class StudentSex {
    private String name;
    private String sex;
    private int score;

    @Override
    public String toString() {
        return "StudentSex{" +
                "name='" + name + '\'' +
                ", sex='" + sex + '\'' +
                ", score=" + score +
                '}';
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public int getScore() {
        return score;
    }

    public void setScore(int score) {
        this.score = score;
    }

    public StudentSex(String name, String sex, int score) {
        this.name = name;
        this.sex = sex;
        this.score = score;
    }
}
