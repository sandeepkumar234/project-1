#include <iostream>
using namespace std;

class A{
	public:
		void fun1(){
			cout<<"multiple";
		}
};

class B{
	public:
		void fun2(){
			cout<<" inheritance";
		}
};

class C: public B,public A{
	public:
		void fun3(){
			cout<<":) <->";
		}
};

int main(){
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	return 0;
	
}
