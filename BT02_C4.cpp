#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i < j) cout << "*";
            else cout << " ";
        }
        for(int k = n -1 ; k >=0; k-- )
        {
            if(i > k) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
