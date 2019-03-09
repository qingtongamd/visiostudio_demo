
/*
demo 面向对象
*/

#include <iostream>
#include "head.h"
#include "namespace.h"

using namespace std;
using namespace space_1;

int main(void)
{
	//cout << "Value of __LINE__ : " << __LINE__ << endl;
	//cout << "Value of __FILE__ : " << __FILE__ << endl;
	//  _DATE_ system func
	cout << "Value of __DATE__ : " << __DATE__ << endl;   
 	cout << "Value of __TIME__ : " << __TIME__ << endl;

	cout << "hello world!\n";
	char str[] = "Hello C++ \n";

	cout << "Value of str is : " << str;

	box box1;
	box box2;

	box1.length = 5;
	box1.breadth = 5;
	box1.height = 5;

	#pragma message("here ")

	space_1::func();
	space_2::func();
	func();
		
	cout << "result of box :" << box1.value(); 
	return 0;
}