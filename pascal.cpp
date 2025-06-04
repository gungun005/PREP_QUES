//You are given the row and col tell the element at that place in  PASCAL'S TRIANGLE//
#include <iostream>
using namespace std;
int main() {
    std::cout << "Try programiz.pro";
    cout<<"enter n:"<<endl;
    int n;
    cin>>n;
    cout<<"enter r:"<<endl;
    int r;
    cin>>r;
    n--;
    r--;
    int ans=1;
    for(int i=0;i<r;i++)
    {
        ans=ans*(n-i);
        ans/=i+1;
    }
    cout<<ans<<endl;
    
    return 0;
}
