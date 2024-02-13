class Solution {
public:
    int climbStairs(int n) {
        int prev = 1;
        int prev2 = 1;
        int cur;
        for(int i=2;i<=n;i++){
            cur = prev+prev2;
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
};