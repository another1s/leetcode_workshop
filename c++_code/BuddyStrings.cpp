class Solution {
public:
	int same[1000];
	bool buddyStrings(string A, string B) {
		int mismatch = 0;
		vector<int> pos;
		
		for (int k = 97; k < 123; k++) {
			same[k] = 0;
		}

		int i = 0, j = 0;
		while (i<A.size() && j<B.size())
		{
			if (A[i] == B[j])
			{
				same[int(A[i])]++;
				i++; j++;
			}
			else {
				pos.push_back(i);
				i++; j++;
			}
		}
		if (pos.size() == 0) {
			for (int k = 97; k < 123; k++)
			{
				if (same[k] >= 2) {
					cout << true;
					system("pause");
					return true;
				}
			}
			return false;
		}
		else if (pos.size() == 2)
		{
			swap(A[pos[0]], A[pos[1]]);
			//swap(B[pos[0]], B[pos[1]]);
			cout << A << " " << B;
			if (A[pos[0]] == B[pos[0]] && A[pos[1]] == B[pos[1]])
			{
				system("pause");
				return true;
			}
			else {
				system("pause");
				return false;
			}
		}
		

		return false;
	}
};
