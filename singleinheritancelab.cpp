#include <iostream>
using namespace std;
 class p{
 	public:
 		void fun1(){
 			cout<<"single"<<endl;
		 }
 };
 
 class A: public p{
 	public:
	    void fun2(){
 		    cout<<"abc";
	 }
 };
 
 int main(){
 	A obj;
 	obj.fun1();
 	obj.fun2();
 	return 0;
 	
 }
 
 
