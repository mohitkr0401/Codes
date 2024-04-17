interface Department{
    void getDepartment();
}
interface Salary{
    void getSalary();
}
class Employee implements Department, Salary{
    String dept;
    int sal;
    Employee(String department, int salary){
        dept=department;
        sal=salary;
    }
    public void getDepartment(){
        System.out.println("Department:"+dept);
    }
    public void getSalary(){
        System.out.println("Salary:"+sal);
    }
}
class interfaces {
    public static void main(String[] args) {
        Employee emp=new Employee("CS/IT", 60000);
        emp.getDepartment();
        emp.getSalary();
        System.out.println("Adyanshi Singh \nIT-3 \n03776803121");
    }
    
}
