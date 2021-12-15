import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner leer = new Scanner(System.in);
        int a, b;
        a = leer.nextInt();
        b = leer.nextInt();
        System.out.println("PROD = " + (a * b));
    }
 
}