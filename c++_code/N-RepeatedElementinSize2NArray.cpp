class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int num=0,o;
        for(int i=0;i<A.size();i++)
        {
            num = count(A.begin(),A.end(),A[i]);
            if(num>1)
            {
                o=A[i];
                break;
            }
        }
        return o;
    }
};
