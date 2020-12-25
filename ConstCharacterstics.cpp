//program to demonstrate the concept of constant characterstics

#include<iostream>
using namespace std;

class Demo
{
  public:
         int i;
		 const int j;                                             // const int j = 21; we can also initilize using these format 
		 Demo(int a = 11,int b = 21):j(b)                            //:j(500)                        //not possible to use = operator must be use function bracket()
		 {
		   i = a;
		 }
};

int main()
{
  cout<<"Inside main\n";
  Demo obj;
  cout<<"value of i \t"<<obj.i<<"\n";
  cout<<"value of j \t"<<obj.j<<"\n";
  
  obj.i++;
  cout<<"value of i after increment\t"<<obj.i<<"\n";
  cout<<"value of j is not possible to increment\n";
  //obj.j++;         ----> error: increment of read-only member
  

return 0;
}

/*
output 
Inside main
value of i      11
value of j      21
value of i after increment      12
value of j is not possible to increment
*/