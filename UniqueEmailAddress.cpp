class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		vector<string> res;
		for (int i = 0; i<emails.size(); i++)
		{
			int mid, plus;
			
			string s = emails[i];
			mid = emails[i].find('@');
			plus = emails[i].find('+');
			if (plus > 0)
			{
				if (plus < mid)
				{
					s.erase(plus, mid - plus);
				}
			}
				for (int k = 0; k<s.find('@'); k++)
				{
					if (s[k] == '.')
					{
						s.erase(k,1);
					}
				}
			res.push_back(s);
			
		}
		sort(res.begin(), res.end());
		res.erase(unique(res.begin(), res.end()), res.end());
		return res.size();
	}
};
