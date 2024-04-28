#include<iostream>
using namespace std;
int main() {
    int n , num =0;
    cin >> n;
    string x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == "++X" || x == "X++")
            num++;
        else if (x == "--X" || x == "X--")
            num--;
    }
    cout << num;
}