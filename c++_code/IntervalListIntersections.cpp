class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) 
    {
        vector<vector<int>> intersec;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                if(A[i][1]>=B[j][0]&&A[i][0]<=B[j][0]&&A[i][1]<=B[j][1])
                {
                    vector<int> s ={B[j][0],A[i][1]};
                    cout<<B[j][0]<<" "<<A[i][1];
                    intersec.push_back(s);
                }
                else if(A[i][0]>=B[j][0]&&A[i][1]<=B[j][1])
                {
                    intersec.push_back(A[i]);
                }
                else if(A[i][0]<=B[j][1]&&A[i][0]>=B[j][0]&&A[i][1]>=B[j][1])
                {
                    vector<int> s={A[i][0],B[j][1]};
                    intersec.push_back(s);
                }
                else if(B[j][0]>=A[i][0]&&B[j][1]<=A[i][1])
                {
                    intersec.push_back(B[j]);
                }
            }
        }
        return intersec;
    }
};
