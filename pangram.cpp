#include <bits/stdc++.h>
using namespace std;

int main()
{    int n;
     string str;
     char j='A';
     cin>>n;
     cin>>str;
     for(int k=0;k<n;k++){
     str[k]=toupper(str[k]);
     }

if(n>=26){
for(int i=0;i<26;i++){
if(str.find(j)!=-1){
 j++;
}
else{
cout<<"NO";
return 0;
}
}
cout<<"YES";
}
else{
cout<<"NO";
    }

    return 0;
}
