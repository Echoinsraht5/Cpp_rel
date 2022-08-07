#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int main()
{
    // while循环
    // int a = 1;
    // int res = 0;
    // while (a <= 100)
    // {
    //     res += pow(a, 3);
    //     a ++ ;      
    // }
    // cout << res << endl;

    // for循环
    // int res = 0;
    // for (int j = 1; j <= 100; j ++ )
    // {
    //    res += pow(j, 3);
    // }
    // cout << res << endl;



    // while循环
    // int i = 0;
    // int res = 0;
    // while (i <= 50)
    // {
    //     if (i % 2 == 0)
    //     {
    //         res += i;
    //     } 
    //     i ++ ;
    // }
    // cout << res << endl;

    // do...while循环
    // int j = 0;
    // int res = 0;
    // do
    // {
    //     if(j % 2 == 0)
    //     {
    //         res += j;
    //     }
    //     j ++ ;
    // }while(j <= 50);
    // cout << res << endl;

    // for循环
    // int res = 0;
    // for(int k = 1; k <= 50; k ++ )
    // {
    //     if (k % 2 == 0)
    //     {
    //         res += k;
    //     }
    // }
    // cout << res << endl;
    



    // fibonacci数列第n项
    // while循环
    // int a = 1, b = 1, i = 0, n = 5;
    // while (i < n - 1)
    // {
    //     int c = a + b;
    //     a = b;
    //     b = c;
    //     i ++ ;
    // }
    // cout << a << endl;

    // for循环 
    // int a = 1, b = 1,  n = 8;
    // for (int i = 0; i < n - 1; i ++ )
    // {
    //     int c = a + b;
    //     a = b;
    //     b = c;
    // }
    // cout << a << endl;


    // int res = 0;
    // for (int x = 1; x <= 100; x ++ )
    // {
    //     // if (x == 50) break;
    //     if (x == 50) continue;

    //     res += x;
    // }

    // cout << res << endl;

    // int n = getchar();
    // for (int i = n; i % 2 == 0;)
    // {
    //    cout << i << endl;
    // }
 


    // int res = 0;
    // for(int k = 1; k <= 100; k ++ )
    // {
    //     if (k % 2 != 0) continue;
    //     else res += k;

    // }
    // cout << res << endl;


    // int n = 5;
    // for (int i = 1, k = 1; i <= n; i ++)
    // {
    //     for(int j = 1; j <= n; j ++, k ++ )
    //         printf("%-5d", k);
    //     cout << endl;
        
    //     for(int j = 1; j <= n; j ++, k ++ )
    //         printf("%-5d", k);
    //     cout << endl;
    // }

    // 100内的所有质数
    // int n;
    // cin >> n;
    // for (int i = 2; i <= 100; i ++ )
    // {
    //     bool is_prime = true;
    //     for (int j = 2; j < i; j ++ )
    //         if (n % j == 0)
    //         {
    //             is_prime = false;
    //             break;
    //         }
    //     if (is_prime) cout << i << endl;
    // }
    

    // 菱形
   
    int n;
    cin >> n;
    
    
    int cx = n / 2, cy = n / 2;
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < n; j ++ )
            if (abs(i - cx) + abs(j - cy) <= n / 2)
                cout << '*' ;
            else 
                cout << ' ' ;
        cout << endl;
    }

    return 0;
}