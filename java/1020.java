import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a, conAños = 0, conMeses = 0;
        a = leer.nextInt();
        while (a >= 365) {
            a -= 365;
            conAños++;
        }
        while (a >= 30) {
            a -= 30;
            conMeses++;
        }
        System.out.println(conAños + " ano(s)");
        System.out.println(conMeses + " mes(es)");
        System.out.println(a + " dia(s)");
    }

}