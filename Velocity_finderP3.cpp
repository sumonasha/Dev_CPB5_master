#include <bits/stdc++.h>
using namespace std;

int main()
{
    int velocity, acceleration, displacement;
    
    while(cin>>velocity>>acceleration){
    
        displacement = velocity * 2 * acceleration;
        cout<<displacement<<endl;
    }  
    return 0;
}