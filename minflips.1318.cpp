class Solution {
public:
    int minFlips(int a, int b, int c) {
        int max = std::max(a,b);
        max = std::max(max,c);
        int counter = 0;
        while (max != 0) {
            max >>= 1;
            ++counter;
        }
        vector aVec (counter, 0);
        vector bVec (counter, 0);
        vector cVec (counter, 0);
        

        bitCounter(a, aVec);
        bitCounter(b, bVec);
        bitCounter(c, cVec);
        int count = 0;
        
        for (int i = 0; i < cVec.size(); ++i) {
            if ((aVec[i] | bVec[i]) == cVec[i]) {
                continue;
            }
            else if (cVec[i] == 1) {
                count += 1;
            }
            else {
                if (aVec[i] == 1 && bVec[i] == 1) {
                    count += 2;
                } else {
                    count++;
                }
            }
        }
        return count;
    }
    
    void bitCounter (int num, vector<int> &bits) {
        int index = 0;
        while (num != 0) {
            if ((num & 0b1) == 0b1) {
                bits[index] = 1;
            }
            else {
                bits[index] = 0;
            }
            num >>= 1;
            ++index;
        }
    }
};