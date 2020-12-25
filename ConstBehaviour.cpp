//program to demonstrate the concept of constant behaviour
//we can not change the value of data member inside the constant behaviour 
//by using constant object we can not call normal function we call only constant function

#include<iostream>
using namespace std;

class Demo
{
  public:
        int i;
		int j;
		Demo(int a = 11,int b = 22)   //parameterized constructor with default
		{
			i = a;
			j = b;
		    cout<<"value of i\t"<<i<<"\n";
            cout<<"value of j\t"<<j<<"\n";
		}
		void fun()
		{
			 i++;
			 j++;
			 cout<<"After Increment value of i \t"<<i<<"\n";
             cout<<"After Increment value of j \t"<<j<<"\n";
		}
  
        void gun()const
		{
			//i++;     not allow        //error: increment of member 'Demo::i' in read-only object
			//j++;      not allow       //error: increment of member 'Demo::i' in read-only object
		}
};

int main()
{
	cout<<"Inside main\n";
	Demo obj(10,20);
	obj.fun();
	obj.gun();
	
	const Demo obj2(10,20);
	//obj2.fun(); ---> error: passing 'const Demo' as 'this' argument discards qualifiers
	obj2.gun();
	
return 0;
}

/*
output 
value of i      10
value of j      20
After Increment value of i      11
After Increment value of j      21
value of i      10
value of j      20
*/