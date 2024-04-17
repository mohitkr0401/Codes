import java.util.*;

class IntData {
    int arr[], i, sum, size;

    IntData(int size) {
        arr = new int[size];
        sum = 0;
    }

    void input() {
        Scanner sc = new Scanner(System.in);
        for (i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
    }

    void display() {
        System.out.println("The Numbers are: ");
        for (i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    void sumCal() {
        for (i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        System.out.println("The SUM is: " + sum);
    }
}

class Exp8 {
    public static void main(String a[]) {
        System.out.println("Enter 5 Numbers:");
        IntData obj = new IntData(5);
        obj.input();
        obj.display();
        obj.sumCal();
    }
}
