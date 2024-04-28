class Q {
    int n;
    boolean valueSet = false;

    synchronized int get() {
        while (valueSet == false)
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Interrupted Exception caught");
            }
        System.out.println("Got by Consumer:" + n);
        valueSet = false;
        notify();
        return n;
    }

    synchronized void put(int n) {
        while (valueSet == true) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println("Interrupted Exception caught");
            }
        }
        this.n = n;
        valueSet = true;
        System.out.println("Put by producer: " + n);
        notify();
    }
}

class Producer extends Thread {
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

class Consumer extends Thread {
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

class Consumer_Producer {
    public static void main(String[] args) {
        Q q = new Q();
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        new Producer(q);
        new Consumer(q);
        System.out.println("Press Ctrl-C to stop.");
    }
}