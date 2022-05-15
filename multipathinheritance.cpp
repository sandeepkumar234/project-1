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
 
 class D:public B, public A{
 	public:
 		void fun(){
 			cout<<"123";
		 }
 };
 
 int main(){
 	D obj;
 	obj.fun1();
 	return 0;
 }
