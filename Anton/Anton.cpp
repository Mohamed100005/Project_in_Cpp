#include<iostream>
using namespace std;
int main() {
	int n = 0;
	float x = 0 ,v = 0;
	char l;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l;
		if (l == 'A')
			x++;
		else
			v++;
	}
	if (x > v)
		cout << "Anton";
	else if (x < v)
		cout << "Danik";
	else if (x == v)
		cout << "Friendship";
}