import java.io.*;
import java.net.*;

class Client {
    @SuppressWarnings("resource")
    public static void main(String args[]) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            Socket client = new Socket("localHost", 12345);
            System.out.println("Connection Established");
            BufferedReader in = new BufferedReader(new InputStreamReader(client.getInputStream()));
            PrintWriter out = new PrintWriter(client.getOutputStream(), true);
            out.println("Hello from Client");
            String response = in.readLine();
            System.out.println("Server Response : " + response);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}