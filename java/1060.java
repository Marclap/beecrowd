import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        double a;
        int neg = 0;
        for (int i = 0; i < 6; i++) {
            a = leer.nextDouble();
            if (a > 0) {
                neg++;
            }
        }
        System.out.println(neg + " valores positivos");
    }

}