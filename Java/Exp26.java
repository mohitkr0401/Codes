import java.io.File;
import java.text.SimpleDateFormat;

class Exp26 {
    static void p(String s) {
        System.out.println(s);
    }

    public static void main(String args[]) {
        File f1 = new File("D:/JAVA/Mohit_Java.txt");
        p("File Name: " + f1.getName());
        p("Path: " + f1.getPath());
        p("Abs Path: " + f1.getAbsolutePath());
        p("Parent: " + f1.getParent());
        p(f1.exists() ? "Exists" : "Does not exist");
        p(f1.canWrite() ? "is Writeable" : "is not Writeable");
        p(f1.canRead() ? "is Readable" : "is not Readable");
        p("is " + (f1.isDirectory() ? "" : "not" + " a Directory"));
        
        p(f1.isFile() ? "is Normal file" : "Path");
        SimpleDateFormat sdf = new SimpleDateFormat("MM/dd/yyyy HH:mm:ss");
        p("File last modified: " + sdf.format(f1.lastModified()));
        p("File size: " + f1.length() + " Bytes");
    }
}