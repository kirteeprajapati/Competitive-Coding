public /* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
	    int T, N, X, K;
	    T = sc.nextInt();
	    for(int i = 0; i<T; i++){
	        N = sc.nextInt();  //No of friends
	        X = sc.nextInt();  //Prize of one burger
	        K = sc.nextInt();  //Money he has
	        if (N*X <= K){
	            System.out.println("YES");
	        }
	        else if (N*X>K){
	            System.out.println("No");
	        }
	    }
	    sc.close();
	    
	}
}{

}
