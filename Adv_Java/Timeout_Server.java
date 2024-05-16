import java.io.*;
import java.net.*;

class Timeout_Server {
    private static final int TIMEOUT = 10000;

    public static void main(String args[]) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");

        try {
            ServerSocket serverSocket = new ServerSocket(12345);
            serverSocket.setSoTimeout(TIMEOUT);
            System.out.println("Waiting for Client.....");
            try {
                Socket clientSocket = serverSocket.accept();
                System.out.println("Connection Established !!");
                BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
                String message = in.readLine();
                System.out.println("Client says : " + message);
                out.println("Server received : " + message);
            } catch (SocketTimeoutException e) {
                System.err.println("Timeout: No client connection within " + TIMEOUT + " milliseconds.");
            }
            serverSocket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}