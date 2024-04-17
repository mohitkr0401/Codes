import java.io.*;

class Exp25 {
    public static void main(String s[]) throws IOException {
        String name;
        int roll;
        FileWriter fw = new FileWriter("Demo.txt");
        name = "MOHIT\n";
        roll = 40;
        fw.write(name);
        fw.write(roll);
        name = "ADYANSHI\n";
        roll = 37;
        fw.write(name);
        fw.write(roll);
        name = "ABHISHEK\n";
        roll = 501;
        fw.write(name);
        fw.write(roll);
        name = "SATYAM\n";
        roll = 002;
        fw.write(name);
        fw.write(roll);
        fw.close();
        FileReader fr = new FileReader("Demo.txt");
        BufferedReader br = new BufferedReader(fr);
        while ((name = br.readLine()) != null) {
            roll = br.read();
            System.out.println(name + " " + roll);
        }
        br.close();
        fr.close();
    }
}