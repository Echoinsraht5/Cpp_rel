#include<bits/stdc++.h>
#include <typeinfo>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>


using namespace std;

int main()
{
    // int a = 2;
    // char s = 's';
    int a[] = {1, 1, 2, 2, 3, 3, 4};
    int *p  = a;
    int *q  = unique(a, a + 7);
    int m  = unique(a, a + 7) - a;
    cout << m << ' ' << *p << ' ' << *q << endl;
    // cout << p << ' ' << p + 1 << ' ' << q << ' ' << m << endl;
    for (int i = 0; i < m; i ++ ) cout << a[i] << ' ';
    // // int b = 2125;
    // double c = 15.1153;
    
    // printf("%-5d!\n", a);
    // printf("%15d!\n", b);
    // printf("%08.3lf!\n", c);
    
    // if (n) cout << a << endl;
    
    // queue<string> s;

    // s.push("hello");
    // s.push("hello1");
    // s.push("hello2");
    // s.pop();

    // cout << s.front() << endl;

    return 0;
}