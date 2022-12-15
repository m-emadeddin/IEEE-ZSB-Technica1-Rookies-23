/**
 *   Problem-2, Leetcode Submission: 
 *      https://leetcode.com/problems/last-stone-weight/submissions/860025647/
 */
import java.util.Arrays;

public class Solution {
    public int lastStoneWeight(int[] stones) {
        if(stones.length < 2) return stones[0];
        Arrays.sort(stones);
        while(stones[stones.length-1] > 0 && stones[stones.length-2] > 0){
            if(stones[stones.length-1] == stones[stones.length-2]){
                stones[stones.length-1] = -1;
                stones[stones.length-2] = -1;
            }
            else{
                stones[stones.length-1] -= stones[stones.length-2]; 
                stones[stones.length-2] = -1;
            }
            Arrays.sort(stones);
        }
        return stones[stones.length-1] > -1 ? stones[stones.length-1] : 0;
    }
}
