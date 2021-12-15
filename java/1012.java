import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        double a = 0, b = 0, c = 0;
        a = leer.nextDouble();
        b = leer.nextDouble();
        c = leer.nextDouble();
        System.out.println("TRIANGULO: " + String.format("%.3f", ((a * c) / 2)));
        System.out.println("CIRCULO: " + String.format("%.3f", Math.pow(c, 2) * (3.14159)));
        System.out.println("TRAPEZIO: " + String.format("%.3f", ((a + b) * c) / 2));
        System.out.println("QUADRADO: " + String.format("%.3f", (b * b)));
        System.out.println("RETANGULO: " + String.format("%.3f", (a * b)));
    }

}