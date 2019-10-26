#include <iostream>
using namespace std;

int main(){
 int x,y,tmp;
 cin >> x >> y;
 cout << "Before : " << "x is " << x << "y is " << y;
 tmp = x;
 x = y;
 y = x;
 cout << "After : " << "x is " << x << "y is " << y;
}
