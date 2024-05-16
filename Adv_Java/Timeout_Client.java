import java.io.*;
import java.net.*;

class Timeout_Client {
    private static final int TIMEOUT = 5000;

    public static void main(String args[]) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");

        try {
            Socket client = new Socket();
            client.connect(new InetSocketAddress("localhost", 12345), TIMEOUT);
            System.out.println("Connection Established");
            BufferedReader in = new BufferedReader(new InputStreamReader(client.getInputStream()));
            PrintWriter out = new PrintWriter(client.getOutputStream(), true);
            out.println("Hello from Client, Mohit");
            String response = in.readLine();
            System.out.println("Server Response : " + response);
            client.close();
        } catch (SocketTimeoutException e) {
            System.err.println("Connection timed out: " + e.getMessage());
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}