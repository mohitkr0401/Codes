class Stack {
    int stck[];
    int tos;

    Stack(int size) {
        stck = new int[size];
        tos = -1;
    }

    void push(int item) {
        if (tos == stck.length - 1)
            System.out.println("Stack is full.");
        else
            stck[++tos] = item;
    }

    int pop() {
        if (tos < 0) {
            System.out.println("Stack underflow.");
            return 0;
        } else
            return stck[tos--];
    }
}

class Queue {
    int que[];
    int front;
    int rear;

    Queue(int size) {
        que = new int[size];
        front = 0;
        rear = -1;
    }

    void push(int item) {
        if (rear == que.length - 1)
            System.out.println("Queue is full");
        else
            que[++rear] = item;
    }

    int pop() {
        if (rear < 0) {
            System.out.println("Queue underflow");
            return 0;
        } else
            return que[rear--];
    }
}

class Exp9 {
    public static void main(String args[]) {
        Stack mystack = new Stack(5);
        
        Queue myqueue = new Queue(7);

        for (int i = 0; i < 5; i++)
            mystack.push(i);
        for (int i = 0; i < 7; i++)
            myqueue.push(i);

        System.out.println("Elements in Stack:");
        for (int i = 0; i < 5; i++)
            System.out.println(mystack.pop());
        System.out.println("Elements in Queue:");
        for (int i = 0; i < 7; i++)
            System.out.println(myqueue.pop());
    }
}