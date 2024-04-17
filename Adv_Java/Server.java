import java.io.*;
import java.net.*;

class Server {
    public static void main(String args[]) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            ServerSocket serverSocket = new ServerSocket(12345);
            System.out.println("Waiting for Client.....");
            Socket clientSocket = serverSocket.accept();
            System.out.println("Connection Established !!");
            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
            String messsage = in.readLine();
            System.out.println("Client says : " + messsage);
            out.println("Server received : " + messsage);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}