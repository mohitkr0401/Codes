import java.io.*;
import java.net.*;

public class Server_Fact {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            ServerSocket serverSocket = new ServerSocket(12345);
            System.out.println("Server waiting for client...");
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected");
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
            int number = Integer.parseInt(in.readLine());
            long factorial = calculateFactorial(number);
            System.out.println("Factorial of " + number + " is: " + factorial);
            out.println(factorial);
            clientSocket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static long calculateFactorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * calculateFactorial(n - 1);
    }
}