
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


    // int grade;
    // cin >> grade;
    // if (grade >= 85) cout << 'A' << endl;
    // else if (grade >= 70) cout << 'B' << endl;
    // else if (grade >= 60) cout << 'C' << endl;
    // else cout << 'D' << endl;


    // int a;
    // cin >> a;
    // if (a % 400 == 0 || a % 100 != 0 && a % 4 == 0) cout << "yes" << endl;
    // else cout << "no" << endl;




    double a, b, c;
    a = 1.2;
    b = 2.3;
    c = 2.3;
    
    cin >> a >> b >> c;
    if (a >= b + c || a + c >= b || b + c >= a)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c ==  a * a + b * b) 
        {
            if (a == b && b == c) cout << "TRIANGULO RETANGULO" << "\n" << "TRIANGULO EQUILATERO" << endl;
            else if (a == b && a != c || a == c && a != b || b == c && b != a) cout << "TRIANGULO RETANGULO" << "\n" << "TRIANGULO ISOSCELES" << endl;
            else cout << "TRIANGULO RETANGULO" << endl;
        }    
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) 
        {
            if (a == b && b == c) cout << "TRIANGULO OBTUSANGULO" << "\n" << "TRIANGULO EQUILATERO" << endl;
            else if (a == b && a != c || a == c && a != b || b == c && b != a) cout << "TRIANGULO RETANGULO" << "\n"  << "TRIANGULO ISOSCELES" << endl; 
            else cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else if (a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b) 
        {
            if (a == b && b == c) cout << "TRIANGULO ACUTANGULO" << "\n" << "TRIANGULO EQUILATERO" << endl;
            else if (a == b && a != c || a == c && a != b || b == c && b != a) cout << "TRIANGULO RETANGULO" << "\n"  << "TRIANGULO ISOSCELES" << endl; 
            else cout << "TRIANGULO ACUTANGULO" << endl;
        }
        
        
    }
    else cout << "NAO FORMA TRIANGULO" << endl;
       
    return 0;
  
}