import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        //SOLUTION
        FastReader sc = new FastReader();
        long t = sc.nextLong();
        while(t-- > 0){
        long D,d,p,q;
        D = sc.nextLong();
        d = sc.nextLong();
        p = sc.nextLong();
        q = sc.nextLong();
        long n = D/d;
        long ans=0;
        ans = n*p*d + q*d*(n*(n-1))/2 + (D%d)*(p+n*q);
        System.out.println(ans);
        }
    }
    // SOLUTION ENDS
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt() {
            return Integer.parseInt(next());
        }
        long nextLong() {
            return Long.parseLong(next());
        }
        double nextDouble() {
            return Double.parseDouble(next());
        }
        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
