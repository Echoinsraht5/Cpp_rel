#include <iostream>
#include <algorithm>
// #include <Windows.h>

using namespace std;

int main()
{
    // system("chcp 65001");
    printf("请输入数字n(奇数且最好>5哦): ");
    int n;
    cin >> n;
    // cout << n << endl;

    int cx = n / 2, cy = n / 2;
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < n; j ++ )
            if (abs(i - cx) + abs(j - cy) == n / 2)
                cout << '*' ;
            else 
                cout << ' ' ;
        cout << endl;
    }

    cout << endl;

     for (int l1 = 0; l1 < n; l1 ++ )
    {
        for (int l2 = 0; l2 < n; l2 ++ )
            if (abs(l1 - cx) + abs(l2 - cy) <= n / 2)
                cout << '*' ;
            else 
                cout << ' ' ;
        cout << endl;
    }

    cout << endl;
  
    for (int m1 = 0 ; m1 < n ; m1 ++ )
    {
        for (int m2 = 0; m2 < n; m2 ++ )
        {
            bool is_not_k = true;
            for (int k = 1; k <= n / 2; k += 2 )
            {    
                if (abs(m1 - cx) + abs(m2 - cy) == k )
                {
                    is_not_k = false;
                    break;
                }
            }
            if (!is_not_k) cout << "*";
            else cout << ' ';
        }
        cout << endl;    
    }

    printf("↓按下任意键退出↓\n");
    system("pause");

}
