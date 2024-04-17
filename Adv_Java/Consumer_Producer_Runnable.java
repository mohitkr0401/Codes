class A {
    int n;
    boolean valueSet = false;

    synchronized int get() {
        while (valueSet == false) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("InterruptedException caught");
            }
        }
        System.out.println("Got By Consumer : " + n);
        valueSet = true;
        notify();
        return n;
    }

    synchronized void put(int n) {
        while (valueSet == true) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("InterruptedException caught");
            }
        }
        this.n = n;
        System.out.println("Put By Producer : " + n);
        valueSet = true;
        notify();
    }
}

class Producer implements Runnable {
    Q q;

    Producer(Q q) {
        this.q = q;
        new Thread(this, "Producer").start();
    }

    public void run() {
        int i = 0;
        while (true) {
            q.put(i++);
        }
    }
}

class Consumer implements Runnable {
    Q q;

    Consumer(Q q) {
        this.q = q;
        new Thread(this, "Consumer").start();
    }

    public void run() {
        while (true) {
            q.get();
        }
    }
}

public class Consumer_Producer_Runnable {
    public static void main(String args[]) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        Q q = new Q();
        System.out.println("Press Control+C to stop.");
        new Producer(q);
        new Consumer(q);
    }
}