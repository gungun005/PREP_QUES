#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[]={8,10,6,2,9,7};
stack<int>st;
st.push(-1);
int cnt=0;
for(int i=5;i>=0;i--)
{
  if(arr[i]>st.top())
  {
    cnt++;
    st.push(arr[i]);
  }
}
cout<<cnt<<endl;
  return 0;
}
