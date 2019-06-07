class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int jewels[1000],sum=0;
        for (int j=0;j<1000;j++)
        {
            jewels[j]=0;
        }
        for(int k=0;k<J.size();k++)
        {
            jewels[int(J[k])]=100;
        }
        
        for(int i=0;i<S.size();i++)
        {
            jewels[int(S[i])]++;
        }
        
        for(int j=65;j<123;j++)
        {
            cout<<jewels[j]<<" ";
            if(jewels[j]>100)
            {
                sum+=jewels[j]-100;
            }
        }
        return sum;
    }
};
