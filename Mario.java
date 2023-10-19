import java.util.Scanner;

public class Mario {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Height: ");

        // get the height from input
        int height = scanner.nextInt();

        // print the bricks
        for (int i = height; i > 0; i--) {
            for (int j = 0; j <= height; j++) {
                System.out.print(j >= i ? "#" : " ");
            }

            System.out.print('\n');
        }       
    }
}0