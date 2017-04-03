#include <iostream>
using namespace std;
int main()
{
  int cal_fact(int);
  int num,fact_val;
  cout<<"Enter a number: ";
  cin >> num;
  fact_val=cal_fact(num);
  cout << "Factorial is "<<fact_val;
  return 0;
}
int cal_fact(int num)
{
  int val=1;
  for(int i=num;i>1;i--)
  {
    val=val*i;
  }
  return val;
}
