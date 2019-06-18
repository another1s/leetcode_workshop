class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0) return -1;
        int module = 1;
        for(int i=1;i<=k;i++)
        {
            if(module % k == 0)
                return i;
            module = (module*10 +1)%k;
        }
        return 0;
    }
};
