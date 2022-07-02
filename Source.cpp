#include<iostream>
using namespace std;

int main()
{
	string arrA;
	string arrP;
	cin >> arrA;
	cin >> arrP;


	int counter = 0;
	for (int i = 0; i < arrA.length(); i++)
	{
		if (arrA[i] == arrP[i])
			counter++;
	}

	cout << counter;
	return 0;
}