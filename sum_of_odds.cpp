#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[6]={8,10,6,2,9,7};
int sum=0;
for(int i=0;i<6;i++)
{
  if(arr[i]&1)
  {
    sum+=arr[i];
  }
}
cout<<sum;
  return 0;
}
