package GodOfJava1.chapter8;

public class ManageStudent {
    static void main() {
        ManageStudent manageStudent = new ManageStudent();
        Student[] student = null;
        student = manageStudent.addStudent();
        manageStudent.printStudents(student);
    }
    public Student[] addStudent(){
        Student[] student = new Student[3];
        student[0] = new Student("Lim");
        student[0] = new Student("Min");
        student[0] = new Student("Sook","Seoul","01000000000","ccccssung@gmail.com");
        return student;
    }
    public void printStudents(Student[] student){
        for(Student val : student) {
            System.out.println(val);
        }
    }
}
