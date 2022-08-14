
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



// 高精度运算


/* Code
#include<iostream>

using namespace std;

const int N = 3000;

int main()
{
    int a[N] = {1};
    int n ;
    cin >> n; 
    int m = 1;
    
    for (int i = 0; i < n; i ++ )
    {
        int t= 0;
        for (int j = 0; j < m; j ++ )
        {
            t += a[j] * 2;
            a[j] = t % 10;
            t /= 10;
        }
        if (t) a[m ++ ] = 1;
    }
    for (int i = m - 1;i >= 0; i -- ) cout << a[i];
    cout << endl;
*/



// 747. 数组的左上半部分(12x12数组左上半部分元素和,平均值)

// 输入一个二维数组 M[12][12]，根据输入的要求，求出二维数组的左上半部分元素的平均值或元素的和。

// 左上半部分是指次对角线上方的部分，如下图所示，黄色部分为对角线，绿色部分为左上半部分：

// UOJ_1185.png

// 输入格式
// 第一行输入一个大写字母，若为 S，则表示需要求出左上半部分的元素的和，若为 M，则表示需要求出左上半部分的元素的平均值。

// 接下来 12 行，每行包含 12 个用空格隔开的浮点数，表示这个二维数组，其中第 i+1 行的第 j+1 个数表示数组元素 M[i][j]。

// 输出格式
// 输出一个数，表示所求的平均数或和的值，保留一位小数。

// 数据范围
// −100.0≤M[i][j]≤100.0
// 输入样例：
// M
// -0.4 -7.7 8.8 1.9 -9.1 -8.8 4.4 -8.8 0.5 -5.8 1.3 -8.0
// -1.7 -4.6 -7.0 4.7 9.6 2.0 8.2 -6.4 2.2 2.3 7.3 -0.4
// -8.1 4.0 -6.9 8.1 6.2 2.5 -0.2 -6.2 -1.5 9.4 -9.8 -3.5
// -2.3 8.4 1.3 1.4 -7.7 1.3 -2.3 -0.1 -5.4 -7.6 2.5 -7.7
// 6.2 -1.5 -6.9 -3.9 -7.9 5.1 -8.8 9.0 -7.4 -3.9 -2.7 0.9
// -6.8 0.8 -9.9 9.1 -3.7 -8.4 4.4 9.8 -6.3 -6.4 -3.7 2.8
// -3.8 5.0 -4.6 2.0 4.0 9.2 -8.9 0.5 -3.9 6.5 -4.3 -9.9
// -7.2 6.2 -1.2 4.1 -7.4 -4.6 4.7 -0.4 -2.2 -9.1 0.4 -5.8
// 9.1 -6.4 9.2 0.7 10.0 -5.7 -9.7 -4.4 4.7 4.7 4.9 2.1
// -1.2 -6.2 -8.2 7.0 -5.3 4.9 5.5 7.2 3.4 3.2 -0.2 9.9
// -6.9 -6.2 5.1 8.5 7.1 -0.8 -0.7 2.7 -6.0 4.2 -8.2 -9.8
// -3.5 7.7 5.4 2.8 1.6 -1.0 6.1 7.7 -6.5 -8.3 -8.5 9.4
// 输出样例：
// -0.8


/* Code
#include <iostream>

using namespace std;

int main()
{
    char c;
    scanf ("%c", &c);
    double a [12][12];
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 12; j ++ ) scanf("%lf", &a[i][j]);
    
    int b = 0;
    double res = 0;   
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 11 - i; j ++ )
        {
            b ++;
            res += a[i][j];
        }
    if (c == 'S') printf("%.1lf", res);
    else if (c == 'M') printf("%.1lf", res / b);
    
    return 0;
}
*/



//12x12数组右下半部分元素和,平均值(用数组总和-左上半部分)


/* Code
#include <iostream>

using namespace std;

int main()
{
    char c;
    scanf ("%c", &c);
    double a [12][12];
    int b1 = 0;
    double res1 = 0; 
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 12; j ++ ) 
        {
            scanf("%lf", &a[i][j]);
            b1 ++ ;
            res1 += a[i][j];
        }
    
    
    int b2 = 0;
    double res2 = 0;   
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 12 - i; j ++ )
        {
            b2 ++ ;
            res2 += a[i][j];
        }
    if (c == 'S') printf("%.1lf", res1 - res2);
    else if (c == 'M') printf("%.1lf", (res1 - res2) / (b1 - b2)); 
    
    return 0;
}
*/



// 745. 数组的右上半部分

// 输入一个二维数组 M[12][12]，根据输入的要求，求出二维数组的右上半部分元素的平均值或元素的和。

// 右上半部分是指主对角线上方的部分，如下图所示，黄色部分为对角线，绿色部分为右上半部分：

// UOJ_1183.png

// 输入格式
// 第一行输入一个大写字母，若为 S，则表示需要求出右上半部分的元素的和，若为 M，则表示需要求出右上半部分的元素的平均值。

// 接下来 12 行，每行包含 12 个用空格隔开的浮点数，表示这个二维数组，其中第 i+1 行的第 j+1 个数表示数组元素 M[i][j]。

// 输出格式
// 输出一个数，表示所求的平均数或元素的和的值，保留一位小数。

// 数据范围
// −100.0≤M[i][j]≤100.0
// 输入样例：
// M
// -6.5 8.2 0.7 9.0 0.8 -4.3 0.9 -0.0 -7.9 7.1 -1.6 4.6
// -9.4 -9.0 1.5 -9.0 -5.1 -0.5 -2.8 -9.1 8.0 -6.9 -5.5 -6.6
// -6.8 0.3 3.8 6.1 -9.9 -9.3 8.5 8.6 5.0 6.9 -3.6 -3.0
// -0.8 -1.6 -7.3 -6.7 4.4 -9.1 -9.0 1.6 0.3 -6.0 6.0 -0.8
// -0.8 -6.0 -4.9 -3.9 6.4 6.2 -4.2 -0.9 7.9 1.6 -8.2 -9.2
// 7.8 -5.8 -5.8 -5.8 7.2 0.5 -7.9 1.2 -6.8 -9.1 0.3 -1.4
// 4.3 -7.2 3.5 -6.4 -9.1 -6.0 3.5 -5.1 -5.6 -6.9 -9.1 -2.1
// -7.6 -7.1 0.7 -1.7 5.0 -9.0 1.4 -6.2 7.6 4.8 -7.5 4.0
// -0.2 0.3 -4.2 8.4 0.7 -6.4 -2.7 3.5 -0.9 3.7 0.9 -2.7
// 7.1 0.1 8.4 -5.1 -7.9 -0.5 -5.3 -5.7 -4.6 9.6 -8.3 7.0
// 9.6 -9.8 3.3 -9.9 -6.8 6.7 3.1 1.2 -9.5 -4.3 -1.7 -9.7
// 1.8 5.0 8.3 -0.7 -0.9 3.2 2.5 0.5 7.3 8.3 0.3 0.9
// 输出样例：
// -1.2


/* Code
#include <iostream>

using namespace std;

int main()
{
    char c;
    scanf ("%c", &c);
    double a [12][12];
    for (int i = 0; i < 12; i ++ )
        for (int j = 0; j < 12; j ++ ) scanf("%lf", &a[i][j]);
    
    int b = 0;
    double res = 0;   
    for (int i = 0; i < 12; i ++ )
        for (int j = i + 1 ; j < 12; j ++ )
        {
            b ++;
            res += a[i][j];
        }
    if (c == 'S') printf("%.1lf", res);
    else if (c == 'M') printf("%.1lf", res / b);
    
    return 0;
}
*/
// 左下半部分同右下半部分一样，用总和减右上半部分即可



// 