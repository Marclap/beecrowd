import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a, conMin = 0, conHor = 0;
        a = leer.nextInt();
        while (a > 60) {
            a -= 60;
            conMin++;
        }
        while (conMin > 60) {
            conMin -= 60;
            conHor++;
        }
        System.out.println(conHor + ":" + conMin + ":" + a);
    }

}
