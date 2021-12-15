import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        while (true) {
            int a, b;
            a = leer.nextInt();
            b = leer.nextInt();
            if (a == b) {
                break;
            } else if (a > b) {
                System.out.println("Decrescente");
            } else {
                System.out.println("Crescente");
            }
        }
    }

}