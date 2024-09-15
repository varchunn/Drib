//
#include<iostream>
using namespace std;
 
class Drib
{
 int x;
 int y;
public:
    Drib()
 {
  x = 1;
  y = 3;
 }
    Drib(int a, int b)
 {
  x = a;
  y = b;
 }
    Drib(int a)
 {
  x = y = a;
 }
 
 void Input()
 {
  cout << "X: ";
  cin >> x;
  cout << "Y: ";
  cin >> y;
 }
 void Show()
 {
  cout <<x<<"\\" << y << endl;
 }
 void SetX(int a)
 {
  x = a;
 }
 void SetY(int a)
 {
  y = a;
 }
 int GetX()
 {
  return x;
 }
 int GetY()
 {
  return y;
 }
    Drib Sum(Drib& b)
 {
        Drib rez;
  rez.x = x + b.x;
  rez.y = y + b.y;
  return rez;
 }
    Drib Min(Drib& b)
 {
        Drib rez;
 
  rez.x = x - b.x;
  rez.y = y - b.y;
  return rez;
 }
    Drib Mult(Drib& b)
 {
        Drib rez;
  rez.x = x * b.x;
  rez.y = y * b.y;
  return rez;
 }
    Drib Div(Drib& b)
 {
        Drib rez;
  rez.x = x * b.y;
  rez.y = y * b.x;
  return rez;
 }
};
 
int main()
{
    Drib a;
 a.Input();
 a.Show();
 
    Drib fr;
 fr.Show();
    Drib fr1(10,20);
 fr1.Show();
    Drib fr2(10);
 fr2.Show();
    Drib b;
 b.SetX(5);
 b.SetY(6);
 int x = b.GetX();
 int y = b.GetY();
    Drib fr3(x,y);
 fr3.Show();
 cout << endl;
 
    Drib sum = a.Sum(fr);
 sum.Show();
 
    Drib min = fr.Min(fr1);
 min.Show();
 
    Drib mult = fr1.Mult(fr2);
 mult.Show();
 
    Drib div = fr2.Div(fr3);
 div.Show();
  
 
 
 system("pause");
 return 0;
}
