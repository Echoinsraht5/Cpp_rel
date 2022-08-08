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
    int sx = n / 2, sy = n / 2;

    for (int i = 0 ,j = 0; i < n ; i ++ )
    {
        for (int j = 0; j < n; j ++ )
        {
            bool is_not_k = true;
            for (int k = 1; k <= n / 2; k += 2 )
            {    
                if (abs(sx - i) + abs(sy - j) == k )
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
