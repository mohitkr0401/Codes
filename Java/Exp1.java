class Largest {
    int num1, num2, num3, res;

    void inputdata(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    void findlargest() {
        if (num1 > num2 && num1 > num3) {
            res = num1;
        } else if (num2 > num1 && num2 > num3) {
            res = num2;
        } else {
            res = num3;
        }
    }

    void displaylargest() {
        System.out.println("Bigest Number is : " + res);
    }
}

class Exp1 {
    public static void main(String[] args) {
        Largest x = new Largest();
        x.inputdata(10, 40, 37);
        x.findlargest();
        x.displaylargest();
    }
}