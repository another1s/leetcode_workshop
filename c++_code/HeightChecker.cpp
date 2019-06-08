class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int sum=0;
        vector<int> sorted;
        for(int i=0;i<heights.size();i++)
        {
            sorted.push_back(heights[i]);
        }
        sort(sorted.begin(),sorted.end());
        for(int j=0;j<heights.size();j++)
        {
            if(sorted[j]!=heights[j])
            {
                sum++;
            }
        }
        return sum;
    }
};
