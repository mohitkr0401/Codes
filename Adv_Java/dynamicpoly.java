class parent{
    void display(){
        System.out.println("This si the overridden method.");
    }
}
class Child extends parent{
    void display(){
        System.out.println("This is the overriding method.");
    }
}
/**
 * dynamicpoly
 */
class dynamicpoly {

    public static void main(String[] args) {
        parent obj = new Child();
        obj.display();
        System.out.println("Adyanshi Singh\nIT-3 \n03776803121");        
    }
}