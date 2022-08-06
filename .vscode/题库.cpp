
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