import java.util.*;
import java.lang.*;
import java.io.*;

class CodeChef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int N, A, B;
        N = sc.nextInt();
        A = sc.nextInt();
        B = sc.nextInt();
        int rating = N - A;
        int rating_greater = N - A - B;
        System.out.print(rating + " " + rating_greater);
        sc.close();
    }
}