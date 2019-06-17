class Solution {
public:
	int calm_down = 0;
	int a[90000];
	int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
		int time_of_satisfied = 0;
		calm_down = X;
		a[0] = secret(customers, grumpy, 0);
		time_of_satisfied = a[0];
		cout << a[0] << "grumpy size:" << grumpy.size() << endl;
		cout << "X number" << X << endl;
		for (int i = 1; i < grumpy.size(); i++)
		{
			if (i + X-1< grumpy.size())
			{
				if (grumpy[i - 1] == 1&&grumpy[i+X-1]==1)
				{
					a[i] = a[i - 1] + customers[i + X-1] - customers[i - 1];
					time_of_satisfied = max(time_of_satisfied,a[i]);
				}
				else if(grumpy[i-1]==0&&grumpy[i+X-1]==1)
				{
					a[i] = a[i - 1] + customers[i + X-1];
					time_of_satisfied = max(time_of_satisfied, a[i]);
				}
				else if (grumpy[i - 1] == 0 && grumpy[i + X - 1] == 0)
				{
					a[i] = a[i - 1];
				}
				else
				{
					a[i]=a[i-1] - customers[i - 1];
					time_of_satisfied = max(time_of_satisfied, a[i]);
				}
			}
			else
			{
				if (grumpy[i - 1] == 1)
				{
					a[i] = a[i - 1] - customers[i - 1];
					time_of_satisfied = max(time_of_satisfied, a[i]);
				}
				else {
					a[i] = a[i - 1];
				}
			}
		}
		system("pause");
		return time_of_satisfied;
}
    int secret(vector<int> customers, vector<int>& grumpy, int x)
	{
		int ind = 0, res = 0;
		while (ind<grumpy.size())
		{
			if (ind <= x + calm_down - 1 && ind >= x)
			{
				res += customers[ind];
				ind++;
			}
			else
			{
				res += customers[ind] * (!grumpy[ind]);
				ind++;
			}
		}
		return res;
	}

};
