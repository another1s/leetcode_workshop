#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
	{
    	vector<int> k;
        for(int i=left;i<right;i++)
        {
        	string s = to_string(i);
        	int j=0;
        	while(j<s.size())
        	{
        		if(i%(int(s[j])==0)
        		{
        			j++;
				}
				else{
					break;
				}
			}
			if(j==s.size())
			{
				k.push_back(i);
			}
		}
		return k;
    }
};


int main()
{
	Solution A;
	int x,y;
	cin>>x>>y;
	A.selfDividingNumbers(x,y);
	return 0;
}
