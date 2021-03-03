#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int m = i + 1;
        for(int j = 0 ; j < n ; j++)
        {
            if(m > n )
            {
                for(int k = 1; k <= i; k++){
                    cout << k << " ";
                    }
                    break;
            }
            else cout << m << " ";
            m ++;
        }
        cout << endl;
    }
}
