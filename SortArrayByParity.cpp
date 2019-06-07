class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        vector<int> res;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                even.push_back(A[i]);
            }
            else{
                odd.push_back(A[i]);
            }
        }
        res.insert(res.end(),even.begin(),even.end());
		res.insert(res.end(),odd.begin(),odd.end());
        return res;
    }
};
