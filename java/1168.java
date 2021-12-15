import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner leer = new Scanner(System.in);
        int casos, total = 0;
        String leds;
        char numeritos[];
        casos = leer.nextInt();
        leer.nextLine();
        while (casos > 0) {
            total=0;
            leds = leer.nextLine();
            numeritos = leds.toCharArray();
            for (int i = 0; i < numeritos.length; i++) {
                switch (numeritos[i]) {
                    case '1':
                        total += 2;
                        break;
                    case '2':
                        total += 5;
                        break;
                    case '3':
                        total += 5;
                        break;
                    case '4':
                        total += 4;
                        break;
                    case '5':
                        total += 5;
                        break;
                    case '6':
                        total += 6;
                        break;
                    case '7':
                        total += 3;
                        break;
                    case '8':
                        total += 7;
                        break;
                    case '9':
                        total += 6;
                        break;
                    case '0':
                        total += 6;
                        break;
                }
            }
            System.out.println(total + " leds");
            casos--;
        }
 
    }
 
}