class Solution {
public:
    vector<int> diStringMatch(string S) {
        int l = S.size();
        vector<int> res;
        vector<int> res0;
        int D=0,I=0;
        res.push_back(0);
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='D')
            {
                D--;
                res.push_back(D);
            }
            else{
                I++;
                res.push_back(I);
            }
        }
        for(int k=0;k<res.size();k++)
        {
            res0.push_back(res[k]+abs(D));
        }
        return res0;
    }
};
