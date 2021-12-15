import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner leer = new Scanner(System.in);
        double radio, area, pi = 3.14159;
        radio = leer.nextDouble();
        area = pi * radio * radio;
        System.out.println("A=" + String.format("%.4f", area));
    }
 
}