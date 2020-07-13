#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, v, sellers[50],sum=0,k,ki;
	cin >> n >> v;
	for (int i = 0; i < n; i++)
	{
		bool b = 1;
		cin >> k;
		for(int j=0;j<k;j++)
		{
			cin >> ki;
			if (ki < v && b)
			{
				sellers[sum] = i+1;
				sum++;
				b = 0;
			}
		}
	}
	sort(sellers, sellers + sum);
	cout << sum << endl;
	for (int i = 0; i < sum; i++)
	{
		cout << sellers[i] << " ";
	}


	return 0;
}