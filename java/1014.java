import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a;
        double b;
        a = leer.nextInt();
        b = leer.nextDouble();
        System.out.println(String.format("%.3f", (a / b)) + " km/l");
    }

}