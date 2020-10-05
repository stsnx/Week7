#include<iostream>
#include<stack>
using namespace std;
string dectobi(int &x)
{
	int t = x;
	stack<int> st;
	while (t > 0)
	{
		int temp = t % 2;
		st.push(temp);
		t /= 2;
	}
	while (st.size() < 8)
	{
		st.push(0);
	}
	string temp;
	while (!st.empty())
	{
		temp.push_back(st.top()+48);
		st.pop();
	}
	return temp;
}
int main()
{
	int x;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		if (x >= 0 && i < 256)
		{
			string a = dectobi(x);
			cout << a << ' ';
		}
	}
	return 0;
}