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
//int main()
//{
//	int a, b, c, i, n, k = 0;
//	cin >> a >> b;
//	while (b != 0)
//	{
//		cin >> c;
//		if (a < b < c)
//		{
//			k++;
//		}
//		a = b;
//		b = c;
//	}
//	cout << k << endl;
//}



//domashka 5nomer
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, b, k = 0;
//	cin >> a;
//	while (a != 0)
//	{
//		cin >> b;
//		if (a * 3 == b)
//		{
//			k++;
//		}
//		a = b;
//	}
//	cout << k << endl;
//}

//int main()
//{
//	int n, k, t, f, y;
//	float s = 0.0, p = 1.0;
//	cin >> n >> y;
//	t = y;
//	for (k = 1; k <= n; k++)
//	{
//		if (k % 2 == 0)
//		{
//			f = 1;
//		}
//		else
//		{
//			f = -1;
//		}
//		p *= k;
//		t *= y * y;
//		s += f * (2 + p) / t;
//	}
//	cout << s;
//}

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int n, k = 1, f, y;
//	float s = 0.0, eps, p = 1.0, a, b, t;
//	cout << "Знаменатель" << endl;
//	cin >> y;
//	cout << "Точность" << endl;
//	cin >> eps;
//	t = y * y * y;
//	b = 2 / (y * y * y);
//	do
//	{
//		a = b;
//		p *= k;
//		k++;
//		t *= y;
//		b = (p + 1) / t;
//		s += (p + 1) / t;
//	} 
//	while (abs(a - b) > eps);
//	cout << s;
//}

//nomer 1 str.16
int main()
{
	setlocale(LC_ALL, "Rus");
	int sin(double sinus),n=1, x, k, f, y, cust1;
	float s = 0.0, eps, p = 1.0, a, b, t;
	cout << "" << endl;
	cin >> n;
	cout << "Введите точность" << endl;
	cin >> eps;
	t = n;
	do
	{

	} 
	while (abs(a - b) > eps);
}