#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int m,n;

    cout << "M: ";
    cin >> m;
    cout << "N: ";
    cin >> n;

    for (int i = 0; i < m; i++){
        cout << i << " : " << i+1;
        for (int j = 0; j < n; j++){
            cout << i << " : " << j + 1 << " ";
            cin >> a[i][j];
        }
    }

    int max,min;

    for (int i = 0; i < m; i++){
        max = min = 0;
        for (int j = 1; j < n; j++){
            if (a[i][j] > a[i][max]) max = j;
            if (a[i][j] < a[i][min]) min = j;
       }
       a[i][min] = a[i][max] + a[i][min];
       a[i][max] = a[i][min]  -a[i][max];
       a[i][min] = a[i][min] - a[i][max];
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            cout << " | "  << a[i][j];
            cout << " | ";
        }
        cout << endl;
    }
    return 0;
}