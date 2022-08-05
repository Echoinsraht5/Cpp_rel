
#include<iostream>

using namespace std;

int main()
{
    // int a, b, c;
    // a = getchar();
    // b = getchar();
    // c = getchar();
    // scanf("%d%d%d", &a, &b, &c);
    // if (a > b)
    // {
    //      if(a > c) cout << a << endl;
    //      else cout << c << endl;
    // }
    // if (b > c)
    // {
    //     if (b > a) cout << b << endl;
    //     else cout << a << endl;
    // }

    // int grade = 58;
    // cin >> grade;
    // if (grade >= 85) cout << 'A' << endl;
    // else
    // {
    //     if (grade >= 70) cout << 'B' << endl;
    //     else
    //     {
    //         if (grade >= 60) cout << 'C' << endl;
    //         else cout << 'D' << endl;
    //     }
    // }


    int grade;
    cin >> grade;
    if (grade >= 85) cout << 'A' << endl;
    else if (grade >= 70) cout << 'B' << endl;
    else if (grade >= 60) cout << 'C' << endl;
    else cout << 'D' << endl;

    return 0;


}