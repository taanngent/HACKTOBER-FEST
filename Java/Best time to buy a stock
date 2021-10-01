import java.util.*;
class Solution {
    public int maxProfit(int[] prices) 
    {
        int max=0;
        int mp=0;
        int l=0;
        int r=1;
     int s=prices.length;
        while (r<s)
        {
            if(prices[r]>prices[l])
            {
                mp=prices[r]-prices[l];
                max=Math.max(mp,max);
            }
            else
            {
                l=r;
            }
            r++;
        }
        return max;
        
    }
}
