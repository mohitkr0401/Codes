import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_Client {
    public static void main(String[] args) {
        System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        try {
            DatagramSocket clientSocket = new DatagramSocket();
            InetAddress serverAddress = InetAddress.getByName("localHost");
            byte[] sendData = "Hello from UDP client".getBytes();
            DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, serverAddress, 6789);
            clientSocket.send(sendPacket);
            clientSocket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}