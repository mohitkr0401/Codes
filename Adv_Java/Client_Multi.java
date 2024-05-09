import java.io.*;
import java.net.*;

class Client_Multi {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            Socket socket = new Socket("localHost", 1234);
            System.out.println("Connection Established !!");
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            out.println("Hello from Client");
            String serverResponse = in.readLine();
            System.out.println("Server Response : " + serverResponse);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}