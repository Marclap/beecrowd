import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a, n100, n50, n20, n10, n5, n2, n1;
        a = leer.nextInt();
        System.out.println(a);
        n100 = a / 100;
        a -= (n100 * 100);
        n50 = a / 50;
        a -= (n50 * 50);
        n20 = a / 20;
        a -= (n20 * 20);
        n10 = a / 10;
        a -= (n10 * 10);
        n5 = a / 5;
        a -= (n5 * 5);
        n2 = a / 2;
        a -= (n2 * 2);
        n1 = a / 1;
        System.out.println(n100 + " nota(s) de R$ 100,00");
        System.out.println(n50 + " nota(s) de R$ 50,00");
        System.out.println(n20 + " nota(s) de R$ 20,00");
        System.out.println(n10 + " nota(s) de R$ 10,00");
        System.out.println(n5 + " nota(s) de R$ 5,00");
        System.out.println(n2 + " nota(s) de R$ 2,00");
        System.out.println(n1 + " nota(s) de R$ 1,00");
    }

}