class Solution {
public:
    string toLowerCase(string str) {
        string ss;
        for(int i=0;i<str.size();i++)
        {
            if(int(str[i])<=90&&int(str[i])>=65)
            {
                ss+=(char(int(str[i])+32));
            }
            else{
            ss+=str[i];
            }
        }
        cout<<ss;
        return ss;
    }
};
