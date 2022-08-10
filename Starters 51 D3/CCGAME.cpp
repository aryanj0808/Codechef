#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long int n;
    cin >> n;
    long long int A[n];
    long long int count=0;
    for(int i=n-1;i>=0;--i) 
    {
        cin >> A[i];
        if(A[i]%2!=0) 
            count^=i;
    }
    if(count!=0){ 
        cout<<"Chef"<<endl;
        
    }
    else{ 
        cout<<"Cook"<<endl;
    }
        
    } 
}