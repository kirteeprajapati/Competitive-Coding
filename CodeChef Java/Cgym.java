import java.util.*;
class Codechef {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int X, Y, Z, T;
		T = sc.nextInt();
		for (int i = 0; i<T; i++) {
			X = sc.nextInt();
			Y = sc.nextInt();
			Z = sc.nextInt();
			if (Z<X) {
				System.out.println("0");
			} else if (X<= Z && Z<(X + Y)) {
				System.out.println("1");
			} else if (Z >= (X + Y)) {
				System.out.println("2");
			}
		}
		sc.close();
	}
}