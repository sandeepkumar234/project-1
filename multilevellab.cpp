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
 
 class B: public A{
 	public:
 		void fun3(){
 			cout<<"AbC";
		 }
 };
 
 int main(){
 	B obj;
 	obj.fun3();
 	obj.fun2();
 	obj.fun1();
 	return 0;
 }
 
