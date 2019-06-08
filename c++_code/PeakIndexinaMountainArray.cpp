class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int i=0;
        int index;
        while(i<A.size()-1)
        {
            if(A[i]>=A[i+1])
            {
                index=i;
                break;
            }
            i++;
        }
        return index;
        
    }
};
