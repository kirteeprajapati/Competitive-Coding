import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        java.util.Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int tc =0; tc<T; tc++){
            int A = sc.nextInt();
            int B = sc.nextInt();
            System.out.println(solve(A,B));
        }
        sc.close();
    }
    static int solve(int A, int B){
        return A+B;
    }
}