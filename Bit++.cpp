#include <bits/stdc++.h>
using namespace std;

int main()
{
    int com, X = 0;
    cin >> com;
    while(com--)
    {
        string str;
        cin >> str;
        if(str == "++X") ++X;
        else if(str == "--X") --X;
        else if(str == "X++") X++;
        else X--;
    }
    cout << X << endl;
    return 0;
}
