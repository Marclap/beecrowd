import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int a;
        a = leer.nextInt();
        for (int i = a; i <= a + 12; i++) {
            if(i%2==1){
                System.out.println(i);
            }
        }
    }

}