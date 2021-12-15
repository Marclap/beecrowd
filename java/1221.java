import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        long numero;
        int casos, con = 0;
        casos = leer.nextInt();
        leer.nextLine();
        while (casos > 0) {
            con=0;
            numero = leer.nextLong();
            for (long i = 2; (i * i) <= numero; i++) {
                if (numero % i == 0) {
                    con++;
                }
            }
            if (con >= 1) {
                System.out.println("Not Prime");
            } else {
                System.out.println("Prime");
            }
            casos--;
        }

    }

}