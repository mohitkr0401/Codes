import java.io.*;
import java.net.*;
import java.util.*;

class Chat_Client {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try (Socket socket = new Socket("localHost", 12345)) {
            System.out.println("Connection Established !!");
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            while (true) {
                System.out.println("Your Message : ");
                @SuppressWarnings("resource")
                Scanner input = new Scanner(System.in);
                out.println(input.nextLine());
                String response = in.readLine();
                System.out.println("Server : " + response);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}