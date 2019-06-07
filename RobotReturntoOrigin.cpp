class Solution {
public:
    bool judgeCircle(string moves) {
        int U=0,D=0,L=0,R=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                U++;
            }
            if(moves[i]=='D')
            {
                D++;
            }
            if(moves[i]=='L')
            {
                L++;
            }
            if(moves[i]=='R')
            {
                R++;
            }
        }
        if(U==D&&L==R){return true;}
        else{return false;}
    }
};
