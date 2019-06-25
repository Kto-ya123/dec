#include<conio.h>
#include<iostream>
#include"dec.h"
#include<vector>
#include<list>
using namespace std;


int main()
{
	my::dec a;
	for (int i(0); i < 10; i++)
		a.push_back(i);
	my::dec::iterator it = a.begin();
	for (int& i : a)
	{
		i = 3;
	}
	while (!a.empty())
		cout << a.pop_back() << endl;
	system("pause");
	return 0;
}