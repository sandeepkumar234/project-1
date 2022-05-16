#include <iostream>
using namespace std;

 class p{
 	public:
 		void fun1(){
 			cout<<"Multilevel"<<endl;
		 }
 };
 
 class A: public p{
 	public:
	    void fun2(){
 		    cout<<"abc";
	 }
 };
 
 class B: public p{
 	public:
 		void fun3(){
 			cout<<"AbC";
		 }
 };
 
 int main(){
 	A obj1;
 	B obj2;
 	obj1.fun1();
	obj1.fun2();
	obj2.fun1();
	obj2.fun3();
	 //naman//
	return 0;
	}
