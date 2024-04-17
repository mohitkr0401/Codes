import java.net.InetAddress;

public class Inet_Address {
    public static void main(String[] args) {
        try {
            InetAddress inet = InetAddress.getByName("www.facebook.com");
            System.out.println("Host Name : " + inet.getHostName());
            System.out.println("IP Address : " + inet.getHostAddress());
            System.out.println("Mohit Kumar\nIT-3 \n04076803121");
        } catch (Exception e) {
            System.out.println("exception" + e);
        }
    }
}
