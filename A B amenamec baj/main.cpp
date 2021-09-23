#include <iostream>
using namespace std;

void input(int &a, int &b)
{
	cin >> a >> b;
}
int gcd(int a ,int b)
{
	if(a==b)
	{
		return a;
	}
	while (a && b)
	{
		if (a > b)
		{
			a %= b;
		}
		else {
			b %= a;
		}
	}
	return a + b;
}
void print(int a , int b ,int gcd)
{
	cout << gcd<<" " << a * b / gcd<<endl;
}
int main()
{
	while (1)
	{
		int a, b;
		input(a, b);
		print(a,b,gcd(a, b));
	}
}