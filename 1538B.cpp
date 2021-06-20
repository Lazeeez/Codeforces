#include<iostream>
#define ll long long int
using namespace std;

void solve(){
    ll friends, sum = 0;
    int candles[10000];
    cin >> friends;
    for(int i = 0; i < friends; i++)
    {
        cin >> candles[i];
        sum = sum + candles[i];
    }
    if (sum%friends==0)
    {
        
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