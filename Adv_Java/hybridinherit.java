class Lecturer{
    void dispLecturer(){
        System.out.println("Lecturer Name");
    }
}
class Department extends Lecturer{
    void dispDepartment(){
        System.out.println("Department Name");
    }
}
interface Marks{
    void dispMarks();
}
 class Student extends Department implements Marks{
    String l, d;
    int m;
    Student(String lec, String dept, int marks){
        l=lec;
        d=dept;
        m=marks;
    }
    void dispLecturer(){
        System.out.println("Lecturer Name :"+ l);
    }
    void dispDepartment(){
        System.out.println("Department Name :"+ d);
    }
    public void dispMarks(){
        System.out.println("Marks :"+ m);
    }
 }
public class hybridinherit {
    public static void main(String[] args) {
        Student s= new Student("Vicky","IT", 70);
        s.dispDepartment();
        s.dispLecturer();
        s.dispMarks();
        System.out.println("Adyanshi Singh \nIT-3 \n03776803121");
    }
}