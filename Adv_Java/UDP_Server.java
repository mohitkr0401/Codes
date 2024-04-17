import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class UDP_Server {
    public static void main(String[] args) {
        try {
            System.out.println("Mohit Kumar\nIT-3 \n04076803121");
            DatagramSocket serverSocket = new DatagramSocket(6789);
            System.out.println("UDP Server Listening on Port 6789 ...");
            byte[] receiveData = new byte[1024];
            DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
            serverSocket.receive(receivePacket);
            String message = new String(receivePacket.getData(), 0, receivePacket.getLength());
            System.out.println("Received message : " + message);
            serverSocket.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}