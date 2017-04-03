#include <iostream>
using namespace std;
int main()
{
  int NumDisks=0;
  void cal_toh(int,char,char,char);
  cout<<"Enter Number of disks: ";
  cin>>NumDisks;
  cal_toh(NumDisks,'S','D','A');
  return 0;
}
void cal_toh(int n,char frompeg,char topeg,char auxpeg)
{
  if(n==1)
  {
    cout<<"\nMove disk 1 from peg "<<frompeg<<" to "<<topeg;
    return;
  }
  cal_toh(n-1, frompeg,auxpeg,topeg);
  cout<<"\nMove disk "<<n<<" from peg "<<frompeg<<" to "<<topeg;
  cal_toh(n-1, auxpeg,topeg,frompeg);
}
