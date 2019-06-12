class Solution {
public:
    vector<vector<int>> allpath;
    void dps(vector<vector<int>>& graph,vector<int> path,int N)
    {
        if(graph[N].size()==0) return;
        for(int i=0;i<graph[N].size();i++)
        {
            vector<int> tempath=path;
            tempath.push_back(graph[N][i]);
            if(graph[N][i]==graph.size()-1)
            {
                allpath.push_back(tempath);
            }else
            {
                dps(graph,tempath,graph[N][i]);
            }
        }
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path={0};
        dps(graph,path,0);
        return allpath;
    } 
};
