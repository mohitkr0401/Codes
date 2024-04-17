class PrintMessage extends Thread {
    String message;
    int interval;

    public PrintMessage(String message, int interval) {
        this.message = message;
        this.interval = interval;
    }

    public void run() {
        while (true) {
            System.out.println(message + " ");
            try {
                Thread.sleep(interval * 1000);
            } catch (InterruptedException e) {
                e.getMessage();
            }
        }
    }
}

class Exp18 {
    public static void main(String[] args) {
        Thread t1 = new PrintMessage("GOOD MORNING", 1);
        Thread t2 = new PrintMessage("WELCOME", 2);
        Thread t3 = new PrintMessage("HELLO", 3);
        t1.start();
        t2.start();
        t3.start();

    }
}
