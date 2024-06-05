//You are climbing a staircase. It takes n steps to reach the top.

//Each time you can either climb 1 or 2 steps. 
//In how many distinct ways can you climb to the top?



class Solution {
public:
    int climbStairs(int n) {
        vector<int> mem(n+2);
        if (n==1) {
            return 1;
        }
        mem[0] = 0;
        mem[1] = 1;
        for(int i = 2; i < n + 2; ++i) {
            mem[i] = mem[i-1] + mem[i-2];
        }
        return mem[n+1];
    }
};