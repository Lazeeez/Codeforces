#include<iostream>
#include<numeric>
#define ll long long int
using namespace std;

void solve(){
    ll friends, sum = 0;
    int candles[10000], num = 0, k;
    cin >> friends;
    for(int i = 0; i < friends; i++)
    {
        cin >> candles[i];
    }
    sum = accumulate(candles, candles + friends, sum);
    if (sum%friends==0)
    {
        num = sum / friends;
        for (int i = 0; i < friends; i++)
        {
            if (candles[i] != num)
            {
                k++;
            }
        }
        cout << k << endl;
    }
    else{
        cout << "-1" << endl;
    }

}
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        solve();
    }
}