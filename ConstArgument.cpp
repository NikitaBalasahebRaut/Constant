//program to demonstrate the concept of constant argument
//we can declare the input parameter as constant parameter

#include<iostream>
using namespace std;

class Demo
{
   public:
          Demo(int no1,const int no2)
		  {
			  cout<<"value of no1\t"<<no1<<"\n";
			  no1++;
			  cout<<"value of no1 after increment\t"<<no1<<"\n";
			  //no2++;           ---> error: increment of read-only parameter 'no2'
		  }
};

int main()
{
  int x = 10;
  int y = 20;
  Demo obj(x,y);
  
return 0;
}