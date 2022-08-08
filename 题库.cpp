
// ACwing 712.正数
// 输入 6 个实数，它们要么是正数，要么是负数。

// 请你统计并输出正数的个数。

// 输入格式
// 六个数字，每个占一行。

// 输出格式
// 输出格式为 x positive numbers，其中 x 为正数的个数。

// 数据范围
// 输入数字的绝对值不超过 100。

// 输入样例：
// 7
// -5
// 6
// -3.4
// 4.6
// 12
// 输出样例：
// 4 positive numbers


/* code
#include<iostream>

using namespace std;

int main ()
{
   int cnt = 0;
   
   for (int i = 1; i <= 6; i ++ )
   {
       double x;
       cin >> x;
       
       if (x > 0) cnt ++;
   }
    
    cout << cnt << " positive numbers" << endl;
    
    return 0;
}
*/



// ACwing 716. 最大数和它的位置
// 给定 100 个整数，请你找出其中最大的数字，以及它的输入位置（位置从 1 开始）。

// 输入格式
// 共 100 行，每行包含一个整数。

// 输出格式
// 第一行输出最大的数字。

// 第二行输出该数字的输入位置。

// 数据范围
// 1≤输入数字≤50000,
// 保证输入数字互不相同。

// 输入样例：
// 22229
// 48558
// 24992
// 4755
// 11923
// ...
// 20213
// 输出样例：
// 48558
// 2


/* code
#include<iostream>
#include<algorithm>

using namespace std;

int main ()
{
    int max = 0, p;
    
    for (int a = 1; a <= 100; a ++ )
    {
        int value;
        cin >> value;
        if (value >= max) swap (value, max), p = a;
        else continue;
    }
    cout << max << endl << p << endl;
    
    return 0;
}
*/



// 721. 递增序列

// 读取一系列的整数 X，对于每个 X，输出一个 1,2,…,X 的序列。

// 输入格式
// 输入文件中包含若干个整数，其中最后一个为 0，其他的均为正整数。

// 每个整数占一行。

// 对于输入的正整数，按题目要求作输出处理。

// 对于最后一行的整数 0，不作任何处理。

// 输出格式
// 对于每个输入的正整数 X，输出一个从 1 到 X 的递增序列，每个序列占一行。

// 数据范围
// 1≤X≤100
// 输入样例：
// 5
// 10
// 3
// 0
// 输出样例：
// 1 2 3 4 5
// 1 2 3 4 5 6 7 8 9 10
// 1 2 3


/* code
#include<iostream>

using namespace std;

int main ()
{
    int x;
    while (cin >> x)
    {
        if (!x) break;
        for (int i = 1; i <= x; i ++ ) cout << i << ' ';
        cout << endl;
    }

    return 0;
}
*/



// 719. 连续奇数的和 2

// 输入 N 对整数对 X,Y，对于每对 X,Y，请你求出它们之间（不包括 X 和 Y）的所有奇数的和。

// 输入格式
// 第一行输入整数 N，表示共有 N 对测试数据。

// 接下来 N 行，每行输入一组整数 X 和 Y。

// 输出格式
// 每对 X,Y 输出一个占一行的奇数和。

// 数据范围
// 1≤N≤100,
// −1000≤X,Y≤1000
// 输入样例：
// 7
// 4 5
// 13 10
// 6 4
// 3 3
// 3 5
// 3 4
// 3 8
// 输出样例：
// 0
// 11
// 5
// 0
// 0
// 0
// 12


/* Code v1
#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1, x, y; i <= n; i ++ )
    {
        cin >> x;
        // cout << x << ' ';
        for (int j = 1, res = 0; j < 2; j ++ )
        {
            cin >> y;
            // cout << y << ' ';
            if (x > y) swap(x, y);
            for (int k = ++ x; k < y; k ++ )
                if (k % 2 != 0) res += k;
                
            cout << res << endl;
        }
    }
    return 0;
}
*/


/* Code v2

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    
    while (n -- )
    {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        
        int res = 0;
        for (int i = ++ x; i < y; i ++ )
            if (i % 2) res += i;
        cout << res << endl;

    }
    
    return 0;
}
*/



// 725. 完全数

// 一个整数，除了本身以外的其他所有约数的和如果等于该数，那么我们就称这个整数为完全数。

// 例如，6 就是一个完全数，因为它的除了本身以外的其他约数的和为 1+2+3=6。

// 现在，给定你 N 个整数，请你依次判断这些数是否是完全数。

// 输入格式
// 第一行包含整数 N，表示共有 N 个测试用例。

// 接下来 N 行，每行包含一个需要你进行判断的整数 X。

// 输出格式
// 每个测试用例输出一个结果，每个结果占一行。

// 如果测试数据是完全数，则输出 X is perfect，其中 X 是测试数据。

// 如果测试数据不是完全数，则输出 X is not perfect，其中 X 是测试数据。

// 数据范围
// 1≤N≤100,
// 1≤X≤108
// 输入样例：
// 3
// 6
// 5
// 28
// 输出样例：
// 6 is perfect
// 5 is not perfect
// 28 is perfect


/* Code v1

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++ )
    {
        int x;
        cin >> x;
        if (x == 1 || x == 2) printf("%d is not perfect", x);
        // bool is_prime = true;
        for (int j = 2, res = 0; j < x; j ++ )
        {
            if (x % j == 0)
            {
                // is_prime = false;
                // printf("%d is not prime", x);
                for (int k = 2, l; k < x; k ++)
                    {
                        cout << l << endl;
                        if (k * l == x) res += k;// cout << k << ' ';
                    }
                int res2 = res + 1;
                // cout << res2 << ' ';
                if (res2 == x) printf("%d is perfect", x);
                else printf("%d is not perfect", x);
                break;
            }
            else printf("%d is not perfect", x);
            break;
        }
        // if (is_prime) printf("%d is not perfect", x);
        cout << endl;
    }
    return 0;
}
*/


/* code v2

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        int res = 0;
        for (int i = 1; i * i < x; i ++ )
            if (x % i ==0)
            {
                if (i < x) res += i;
                if (i != x / i && x / i < x) res += x / i;
            }
        if (res == x) printf("%d is perfect", x);
        else printf("%d is not perfect", x);
        cout << endl;
    }
    return 0;
}
*/



// 菱形

/* code 曼哈顿距离

#include<iostream>

using namespace std;

int main()
{
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
*/ 