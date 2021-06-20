#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void solve(){
    int length;
    signed int Array[20000], add = 0, mean, res, res2;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        /* code */
        cin >> Array[i];
        add = add + Array[i];
    } //addition
        if (add < 0)
    {
        /* code */
        mean = add - length;
        if (mean == 0)
        {
            cout << "0";
        }
        else
        {
            cout << mean;
        }            
    }
    else
    {
        mean = add + length;
        res = mean + add;
        res2 = -(res);
        cout << res2;
    }
}
int main(){
    int iterator;
    cin >> iterator;
    while (iterator--)
    {
        solve();
    }
}