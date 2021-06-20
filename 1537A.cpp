#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for (int j=0; j<n;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
        if (sum>=n)
        {
            cout<<sum-n<<endl;
        }
        else 
        {
            cout<<1<<endl;
        }
    }
}