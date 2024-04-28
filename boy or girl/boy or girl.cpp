#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s ;
	cin >> s;
	int n = 0;
	sort(s.begin(), s.end());
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] != s[i - 1])
			n++;
	}
	if (n & 1)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
	return 0;
}