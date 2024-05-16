import java.io.*;
import java.net.*;
import java.util.*;

public class Chat_Server {
    private static final int PORT = 12345;
    private static Set<PrintWriter> clientWriters = new HashSet<>();

    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try (ServerSocket serverSocket = new ServerSocket(PORT)) {
            System.out.println("Server is running...");
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("New client connected: " + clientSocket);
                PrintWriter writer = new PrintWriter(clientSocket.getOutputStream(), true);
                clientWriters.add(writer);
                Thread thread = new Thread(new ClientHandler(clientSocket, writer));
                thread.start();
            }
        } catch (IOException e) {
            System.err.println("Error in the server: " + e.getMessage());
        }
    }

    public static void broadcastMessage(String message) {
        for (PrintWriter writer : clientWriters) {
            writer.println(message);
        }
    }

    private static class ClientHandler implements Runnable {
        private Socket clientSocket;
        private PrintWriter writer;
        private BufferedReader reader;

        public ClientHandler(Socket clientSocket, PrintWriter writer) {
            this.clientSocket = clientSocket;
            this.writer = writer;
        }

        public void run() {
            try {
                reader = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                String username = reader.readLine();
                while (true) {
                    String message = reader.readLine();
                    if (message == null) {
                        break;
                    }
                    broadcastMessage(username + ": " + message);
                }
            } catch (IOException e) {
                System.err.println("Error handling client: " + e.getMessage());
            } finally {
                if (writer != null) {
                    clientWriters.remove(writer);
                }
                try {
                    clientSocket.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}