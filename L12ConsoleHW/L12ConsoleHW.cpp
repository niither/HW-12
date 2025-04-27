#include <iostream>
using namespace std;

void row1(int n);
void row2(int a, int b);
void powerOf2(int n);
int numSum(int n);
void rightLeft(int n);
int powerOfNum(int num, int pow);
int rangeSum(int n1, int n2);

int main()
{
	row1(10);
	cout << "\n\n";
	row2(15, 5);
	cout << "\n\n";
	powerOf2(8);
	cout << "\n\n";
	cout << numSum(128) << "\n\n";
	rightLeft(579);
	cout << "\n\n";
	cout << powerOfNum(2, 8) << "\n\n";
	cout << rangeSum(5, 10) <<"\n\n";
}

// task 1
void row1(int n)
{
	if (n <= 0)
	{
		return;
	}
	row1(n - 1);
	cout << n << " ";
}

// task 2
void row2(int a, int b)
{
	if (a == b)
	{
		cout << a << " ";
		return;
	}
	cout << a << " ";
	if (a < b)
	{
		row2(a + 1, b);
	}
	else
	{
		row2(a - 1, b);
	}
}

// task 3
void powerOf2(int n)
{
	if (n <= 0)
	{
		cout << "NO";
		return;
	}
	if (n == 1)
	{
		cout << "YES";
		return;
	}
	if (n % 2 != 0)
	{
		cout << "NO";
		return;
	}
	powerOf2(n / 2);
}

// task 4
int numSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return (n % 10) + numSum(n / 10);
}

// task 5
void rightLeft(int n)
{
	if (n < 10)
	{
		cout << n;
		return;
	}
	cout << n % 10 << " ";
	rightLeft(n / 10);
}

// task 10
int powerOfNum(int num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}
	if (pow == 1)
	{
		return num;
	}
	return num * powerOfNum(num, pow - 1);
}

// task 11
int rangeSum(int n1, int n2)
{
	if (n1 == n2)
	{
		return n1;
	}
	return n1 + rangeSum(n1 + 1, n2);
}