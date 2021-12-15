import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        double a, b, c;
        a = leer.nextDouble();
        b = leer.nextDouble();
        c = leer.nextDouble();
        double raiz = (Math.pow(b, 2)) - 4 * a * c;
        if (a == 0 || raiz < 0) {
            System.out.println("Impossivel calcular");
        } else {
            System.out.println("R1 = " + String.format("%.5f", ((-b + Math.sqrt(raiz)) / (2 * a))));
            System.out.println("R2 = " + String.format("%.5f", ((-b - Math.sqrt(raiz)) / (2 * a))));
        }
    }
}
