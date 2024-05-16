import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Chat_Client {
    public static void main(String[] args) {
        System.out.println("Yash Singhal | IT-3 | 00876803121");
        try (Socket socket = new Socket("localhost", 12345);
                PrintWriter writer = new PrintWriter(socket.getOutputStream(), true);
                BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()))) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter your username: ");
            String username = scanner.nextLine();
            writer.println(username);
            Thread readerThread = new Thread(() -> {
                try {
                    String message;
                    while ((message = reader.readLine()) != null) {
                        System.out.println(message);
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }
            });
            readerThread.start();
            System.out.println("Connected to the server. You can start chatting.");
            while (true) {
                String message = scanner.nextLine();
                writer.println(message);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}