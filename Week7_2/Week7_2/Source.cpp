#include<iostream>
#include<stack>
#include<string>
using namespace std;
char encode(int x)
{
	char t;
	t = x;
	return t;
}
int main()
{
	int x;
	string text,ans;
	cin >> text;
	int countBit = 0,m=1;
	for (int i = 0; i < text.length(); i+=8)
	{
		for (int j = 7; j >=0 ; j --)
		{
			countBit += (text[i+j] - 48) * m;
			m *= 2;
		}
		if (countBit> 0 && countBit < 256)
		{
				ans.push_back(encode(countBit));
				countBit = 0;
				m = 1;
		}
	}
	cout << ans;
	return 0;
}
//0100100001100101011011000110110001101111