#include <iostream>
using namespace std;
int per(double b);
int main()
{
    double C;
    cout << "C=";
     cin >> C;
    cout <<"F="<<per(C);
    return 0;
}
int per(double b)
{ 
  return  b * 9 / 5 + 32;
}
















