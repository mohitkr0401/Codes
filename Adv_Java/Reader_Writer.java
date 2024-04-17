import java.util.concurrent.locks.ReentrantReadWriteLock;

class ReaderWriter {
    private ReentrantReadWriteLock lock = new ReentrantReadWriteLock();
    private int data = 0;

    public void readData() {
        lock.readLock().lock();
        try {
            System.out.println("Reading data: " + data);
        } finally {
            lock.readLock().unlock();
        }
    }

    public void writeData(int newData) {
        lock.writeLock().lock();
        try {
            System.out.println("Writing data: " + newData);
            data = newData;
        } finally {
            lock.writeLock().unlock();
        }
    }
}

class Reader implements Runnable {
    private ReaderWriter readerWriter;

    public Reader(ReaderWriter readerWriter) {
        this.readerWriter = readerWriter;
    }

    public void run() {
        while (true) {
            readerWriter.readData();
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class Writer implements Runnable {
    private ReaderWriter readerWriter;

    public Writer(ReaderWriter readerWriter) {
        this.readerWriter = readerWriter;
    }

    public void run() {
        int newData = 1;
        while (true) {
            readerWriter.writeData(newData);
            newData++;
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Reader_Writer {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        ReaderWriter readerWriter = new ReaderWriter();
        Thread readerThread = new Thread(new Reader(readerWriter));
        Thread writerThread = new Thread(new Writer(readerWriter));
        writerThread.start();
        readerThread.start();
    }
}