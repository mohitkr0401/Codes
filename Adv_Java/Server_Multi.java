import java.io.*;
import java.net.*;

class Server_Multi {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            ServerSocket serverSocket = new ServerSocket(1234);
            System.out.println("Waiting for Client on port 1234 ....");
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("Connection Esstablished !!");
                Thread clientHandlerThread = new Thread(() -> handleClient(clientSocket));
                clientHandlerThread.start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleClient(Socket clientSocket) {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
            String clientMessage = in.readLine();
            System.out.println("Client Says : " + clientMessage);
            out.println("Server received : " + clientMessage);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}