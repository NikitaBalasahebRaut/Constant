//program to demonstrate the concept of constant object
//when we create constant object ,all the characterstics become constant so we can not change its member

#include<iostream>
using namespace std;

class Demo
{
 public :
       int i;
	   int j;
	   Demo(int a = 10,int b = 20)
	   {
	      i = a;
		  j = b;
	   }
};

int main()
{
 cout<<"Inside main \n";
 
 Demo obj1(100,200);
 cout<<"value of i"<<obj1.i<<"\n";
 cout<<"value of j"<<obj1.j<<"\n";
  
 obj1.i++;
 obj1.j++;
 cout<<"value of i after increment\t"<<obj1.i<<"\n";
  cout<<"value of j after increment\t"<<obj1.j<<"\n";
 
  const Demo obj2(100,200);
  // obj2.i++;       -----> error: increment of member 'Demo::i' in read-only object
  cout<<"We cant increase value of data member(variable)using constant object\n";
  
 return 0;
}
 /*
 Inside main
value of i100
value of j200
value of i after increment      101
value of j after increment      201
We cant increase value of data member(variable)using constant object
*/