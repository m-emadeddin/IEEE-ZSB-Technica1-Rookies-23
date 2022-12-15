/**
 *   Problem-7, Hackerrank Submission: 
 *      https://www.hackerrank.com/challenges/chocolate-feast/submissions/code/305433995
 */

public class Solution {
    public static int redeem(int wrappers, int m){
        if(wrappers < m) return 0;
        return wrappers/m + redeem((wrappers%m + wrappers/m), m);
    }
    public static int chocolateFeast(int n, int c, int m) {
        int bars = n/c;
        int ans = 0;
        ans += bars + redeem(bars, m);
        return ans;
    }
}
