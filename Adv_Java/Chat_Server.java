import java.io.*;
import java.net.*;
import java.util.*;

class Chat_Server {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            ServerSocket serverSocket = new ServerSocket(12345);
            System.out.println("Waiting for Client on port 12345 ...");
            Socket clientSocket = serverSocket.accept();
            System.out.println("Connection Established !!");
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
            while (true) {
                String clientMessage = in.readLine();
                System.out.println("Client : " + clientMessage);
                System.out.println("Your Message : ");
                Scanner input = new Scanner(System.in);
                out.println(input.nextLine());
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}