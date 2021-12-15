import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a, b, c;
        a = leer.nextInt();
        b = leer.nextInt();
        c = leer.nextInt();
        int maiorAB = ((a + b + Math.abs(a - b)) / 2);
        int maiorFin = ((c + maiorAB + Math.abs(c - maiorAB)) / 2);
        System.out.println(maiorFin + " eh o maior");
    }

}