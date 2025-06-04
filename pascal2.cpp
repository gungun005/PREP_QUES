//If we have to generate nth row//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=1;
    cout<<ans<<endl;
    for(int i=1;i<n;i++)
    {
        ans=ans*(n-i);
        ans/=i;
        
        cout<<ans<<endl;
    }
    return 0;
}
