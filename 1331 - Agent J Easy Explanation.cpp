/*
  step by step procedure 
  
  first u know 3 sides of triangle so find area of triangle 
  
  second find angle of each side of triangle
  
  find area of sector --> r*r*theta
  
  then  Triangle area - threesecor area 
  
*/


#include<iostream>
#include<cmath>
#include<iomanip>
using  namespace std;
 
int main()
{
    cout<< setprecision(9) << fixed;
    double  s, a, b, c, area_triangle, theta1, theta2, theta3, a1, a2, a3, r1, r2, r3;
    int i, j, T;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> r1>> r2>> r3;
        a = r1 + r2;
        b = r1 + r3;
        c = r2 + r3;
 
        s = (a + b + c) / 2;
        area_triangle = sqrt(s * (s - a) * (s - b) * (s - c));
        //cout << "Area of triangle = " << area_triangle << endl;
        theta1 = acos(((c * c) - (a * a) - (b * b)) / (2 * a * b) * -1);
        theta2 = acos(((b * b) - (a * a) - (c * c)) / (2 * a * c)* -1);
        theta3 = acos(((a * a) - (c * c) - (b * b)) / (2 * b * c) * -1);
 
        a1 = (r1 * r1 * theta1) / 2;
        a2 = (r2 * r2 * theta2) / 2 ;
        a3 = (r3 * r3 * theta3) / 2;
        //cout << "Theta 1 = " << theta1 << "Theta 2  = " << theta2 << "Theta 3 = " << theta3 << endl;
 
        //cout << "Area of sectors = " << a1 + a2 + a3 << endl;
        cout << "Case " << i << ": " <<( area_triangle - (a1 + a2 + a3)) + 1e-9 << endl;
   
    }
    return 0;
}
