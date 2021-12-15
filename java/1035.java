import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a, b, c, d;
        a = leer.nextInt();
        b = leer.nextInt();
        c = leer.nextInt();
        d = leer.nextInt();
        if ((b > c) && (d > a) && ((c + d) > (a + b)) && (c >= 0) && (d >= 0) && (a % 2 == 0)) {
            System.out.println("Valores aceitos");
        }else{
            System.out.println("Valores nao aceitos");
        }
    }

}