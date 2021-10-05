// Working program with FastReader 
import java.io.*;
import java.util.*;
public class gg
{ 
    static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 

        public FastReader() 
        { 
            br = new BufferedReader(new
                InputStreamReader(System.in)); 
        } 

        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 

        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 

        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 

        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 

        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 

    static final int MAXN = 100001;
    // stores smallest prime factor for every number
    static int spf[] = new int[MAXN];
    // Calculating SPF (Smallest Prime Factor) for every
    // number till MAXN.
    // Time Complexity : O(nloglogn)
    static void sieve()
    {
        spf[1] = 1;
        for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
            spf[i] = i;

        // separately marking spf for every even
        // number as 2
        for (int i=4; i<MAXN; i+=2)
            spf[i] = 2;

        for (int i=3; i*i<MAXN; i++)
        {
            // checking if i is prime
            if (spf[i] == i)
            {
                // marking SPF for all numbers divisible by i
                for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                    if (spf[j]==j)
                        spf[j] = i;
            }
        }
    }
    // A O(log n) function returning primefactorization
    // by dividing by smallest prime factor at every step
    static int getFactorization(int x)
    {
        int c=0;
        while (x != 1)
        {
            c++;
            x = x / spf[x];
        }
        return c;
    }

    /*
    static int LowerBound(int a[], int x) { // x is the target value or key
    int l=-1,r=a.length;
    while(l+1<r) {
    int m=(l+r)>>>1;
    if(a[m]>=x) r=m;
    else l=m;
    }
    return r;
    }

    static int UpperBound(int a[], int x) {// x is the key or target value
    int l=-1,r=a.length;
    while(l+1<r) {
    int m=(l+r)>>>1;
    if(a[m]<=x) l=m;
    else r=m;
    }
    return l+1;
    }
     */
    static int gcd(int a, int b)
    {
        if (a == 0)
            return b; 
        return gcd(b % a, a); 
    }

    // method to return LCM of two numbers
    static int lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }

    public static int[] swap(int a[], int left, int right)
    {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        return a;
    }

    public static int[] reverse(int a[], int left, int right)
    {
        // Reverse the sub-array
        while (left < right) {
            int temp = a[left];
            a[left++] = a[right];
            a[right--] = temp;
        }
        return a;
    }

    public static int[] findNextPermutation(int a[])
    {
        int last = a.length - 2;

        // find the longest non-increasing suffix
        // and find the pivot
        while (last >= 0) {
            if (a[last] < a[last + 1]) {
                break;
            }
            last--;
        }
        // If there is no increasing pair
        // there is no higher order permutation
        if (last < 0)
            return a;

        int nextGreater = a.length - 1;

        // Find the rightmost successor to the pivot
        for (int i = a.length - 1; i > last; i--) {
            if (a[i] > a[last]) {
                nextGreater = i;
                break;
            }
        }

        // Swap the successor and the pivot
        a = swap(a, nextGreater, last);

        // Reverse the suffix
        a = reverse(a, last + 1, a.length - 1);

        // Return true as the next_permutation is done
        return a;
    }

    static void sort(int[] a) {
        ArrayList<Integer> l = new ArrayList<>();
        for (int i : a)
            l.add(i);
        Collections.sort(l);
        for (int i = 0; i < a.length; i++)
            a[i] = l.get(i);
    }

    static double pow(double p,double tt)
    {
        double ii,q,r;
        q=1;
        r=p;
        while(tt>1)
        {
            for(ii=1;2*ii<=tt;ii*=2)
                p*=p;
            tt-=ii;
            q*=p;
            p=r;
        }
        if(tt==1)
            q*=r;
        return q;
    }

    static long pow(long p,long tt,long mod)
    {
        long ii,q,r;
        q=1l;
        r=p;
        while(tt>1)
        {
            for(ii=1l;2*ii<=tt;ii*=2l)
                p=((p%mod)*(p%mod))%mod;
            tt-=ii;
            q=((q%mod)*(p%mod))%mod;
            p=r;
        }
        if(tt==1)
            q=((q%mod)*(r%mod))%mod;
        return q;
    }

    static int factorial(int n)
    {
        return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
    }

    public static long primeFactors(long n)
    {
        long c=0l;
        long max=0l;
        long z=0l;
        //ArrayList <Integer> ll=new ArrayList<>();
        // Print the number of 2s that divide n
        while (n%2==0)
        {
            c++;
            n /= 2l;
            //ll.add(2);
        }
        if(c>max)
        {
            max=c;
            z=2;
        }
        // n must be odd at this point. So we can
        // skip one element (Note i = i +2)
        for (int i = 3; i <= Math.sqrt(n); i+= 2)
        {
            // While i divides n, print i and divide n
            c=0;
            while (n%i == 0)
            {
                c++;
                n /= i;
                //ll.add(i);
            }
            if(c>max)
            {
                max=c;
                z=i;
            }
        }
        c=0;
        // This condition is to handle the case whien
        // n is a prime number greater than 2
        if (n > 2)
        {
            c++;
            //ll.add((int)n);
        }
        if(c>max)
        {
            max=c;
            z=n;
        }
        return z;
    }

    static void PrimeList(){
        int i,j;
        int sieve[]=new int[100001];
        for(i=2;i*i<=100000;i++)
        {
            if(sieve[i]==0)
            {
                for(j=i*i;j<=100000;j+=i)
                    sieve[j]=1;
            }
        }
        ArrayList<Integer> primes=new ArrayList<>();
        for(i=2;i<=100000;i++)
        {
            if(sieve[i]==0)
                primes.add(i);
        }
    }

    static int comp(int a[],int b[],int n)
    {
        int z=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                z=1;
                break;
            }
        }
        if(z==0)
            return 1;
        else
            return 0;
    }

    static boolean isPowerOfTwo(int x)
    {
        return x!=0 && ((x&(x-1))==0);
    }
    static long divide_ceil(long a,long b)
    {
        return (a%b==0)?(a/b):(a/b+1l);
    }
    public static void main(String[] args) 
    {
        //try
        //{
        FastReader d=new FastReader();
        PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int t,i,j,k,l,r,n;
        int mod = (int) 1e9 + 7;

        int Inf=Integer.MAX_VALUE;
        int negInf=Integer.MIN_VALUE;
        t=d.nextInt();
        //t=1;
        String s;
        //char ch1,ch2,ch3,ch4;
        long ans,c,z;

        while(t-->0)
        {
            z=c=0l;
            ans=0l;
            long nn,xx;
            nn=d.nextLong();
            xx=d.nextLong();
            if(nn<=xx)
            {
                pr.println(1);
                continue;
            }

            int arr[]=new int[15];
            for(i=0;i<15;i++)
            {
                arr[i]=(1<<(2*i+1));
            }
            for(i=14;i>=0;i--)
            {
                while(nn-arr[i]>=0)
                {
                    c++;
                    nn-=arr[i];
                    if(nn==0)
                    {
                        pr.println(c);
                        z=1;
                        break;
                    }
                    if(nn<=xx)
                    {
                        pr.println(c+1);
                        z=1;
                        break;
                    }
                }
                if(z==1)
                break;
            }
            if(z==0)
            pr.println(-1);
            //pr.println(ans);
        }
        /*
        }catch(Exception e) {
        System.out.println(0);
        }*/
        pr.flush();
    }
}
