import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int casos;
        casos = leer.nextInt();
        while (casos > 0) {
            int a, b, men, mayor, suma = 0;
            a = leer.nextInt();
            b = leer.nextInt();
            if (a > b) {
                men = b;
                mayor = a;
            } else {
                men = a;
                mayor = b;
            }
            for (int i = men + 1; i < mayor; i++) {
                if (i % 2 == 1) {
                    suma += i;
                }
            }
            System.out.println(suma);
            casos--;
        }
    }

}