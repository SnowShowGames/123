#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//int main()
//{
//	int a, b, n, i, k = 0;
//	cin >> n >> a;
//	for (i = 2; i <= n; i++)
//	{
//		cin >> b;
//		if (a > 0 && b < 0) k++;
//		a = b;
//	}
//	cout << k;
//}

//int main()
//{
//	int n, s = 0, a, b;
//	cin >> a;
//	while (a != 0)
//	{
//		cin >> b;
//		if (a > 0 && b < 0) s += a;
//		a = b;
//	}
//	cout << s;
//}


//nomer 5 str.15
//int main()
//{
//	int a, b,i,k, n, s = 0;
//	double p1, p2;
//	cin >> n >> a;
//	for (i = 2; i <= n; i++)
//	{
//		cin >> b;
//		if (a + b > s)
//		{
//			s = a + b;
//			p1 = i - 1;
//			p2 = i;
//		}
//		a = b;
//	}
//	cout << p1 << p2;
//}


//nomer 1 str.15
//int main()
//{
//	int a, b, n, k;
//	bool flag = 0;
//	cin >> a;
//	while (a != 0)
//	{
//		cin >> b;
//		if ((a > 0 && b < 0) || (a<0 && b>0))
//		{
//			flag += a;
//		}
//		a = b;
//	}
//	cout << flag;
//}

//nomer 2 str.15
//int main()
//{
//	int a, b, i, n, k, s = 0;
//	cin >>n>> a;
//	for (i = 2; i <= n; i++)
//	{
//		cin >> b;
//		if ((a%2!=0) && (b%100!=13))
//		{
//			s = a * b;
//		}
//		a = b;
//	}
//	cout << s << endl;
//}

//nomer4 vrehnii str.15
int main()
{
	int a, b, c, i, n, k = 0;
	cin >> a >> b;
	while (b!= 0)
	{
		cin>>c;
		if (a < b < c)
		{
			k++;
		}
		a = b;
		b = c;
	}
	cout << k << endl;
}