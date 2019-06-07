class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int row=0;row<A.size();row++)
        {
            
            reverse(A[row].begin(), A[row].end());
            //cout<<A[row]<<endl;
        }
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                A[i][j]=(A[i][j]*-1)+1;
                //cout<<A[i][j];
            }
        }
        
        return A;
    }
};
