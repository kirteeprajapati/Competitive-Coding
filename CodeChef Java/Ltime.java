import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            int X = sc.nextInt();
            if (1 <= X & 4 >= X) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            T--;
        }
        sc.close();
    }
}
