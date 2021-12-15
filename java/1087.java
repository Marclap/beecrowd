import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);
        int x1, x2, y1, y2, mover, mover2;
        while (true) {
            x1 = leer.nextInt();
            y1 = leer.nextInt();
            x2 = leer.nextInt();
            y2 = leer.nextInt();
            if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) {
                break;
            }
            mover = x1 - x2;
            mover2 = y1 - y2;
            if (mover < 0) {
                mover *= -1;
            }
            if (mover2 < 0) {
                mover2 *= -1;
            }
            if (x1 == x2 && y1 == y2) {
                System.out.println("0");
            } else if (x1 == x2 || y1 == y2 || mover == mover2) {
                System.out.println("1");
            } else {
                System.out.println("2");
            }
            mover = 0;
            mover2 = 0;

        }
    }

}