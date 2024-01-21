#include <iostream>
using namespace std;

int main() 
{
    // Write C++ code here
    
    std::cout << "Hello world!\n";
    std::cout << "Welcome to C++ environment and enjoy the coding\n";
    std::cout << "I am Abass Kuku, doing software Development as my chosen field of studies\n";
    std::cout << "I am studying at KCAU, the best university in Kenya \n";
    std::cout << "This semester, I am learning introduction to programming, with C++, javascript, Html and Css.\n";
	
	//Add two numbers
	int a = 20;
	int b = 30;
	int c = a + b;
	std::cout<< c<<std::endl;
   
    //Add an other numbers
    int x = 200;
	int y = 300;
	int z = x + y;
	std::cout<< z<<std::endl;
	
	//C++ user input
	int d, e;
	int sum;
	std::cout<<"type first number: ";
	std::cin>>d;
	std::cout<<"type second number: ";
	std::cin>>e;
	sum = d + e;
	std::cout<<sum <<std::endl;
	
	//C++ user input
	int k;
	std::cout<<"input the number: ";
	std::cin>>k;//get user input from the keyboard
	std::cout<<"The input number is: "<<k<<std::endl;//display the input value
	
	//Adding three numbers
	int o = 10, t = 20, s = 89;
	int r = o + t + s;
	std::cout<<r<<std::endl;
	
	//c++ data types
	std::cout<<"size of char: "<<sizeof(char)<<std::endl;
	std::cout<<"size of int: "<<sizeof(int)<<std::endl;
	std::cout<<"size of short int: "<<sizeof(short int)<<std::endl;
	std::cout<<"size of long int: "<<sizeof(long int)<<std::endl;
	std::cout<<"size of float: "<<sizeof(float)<<std::endl;
	std::cout<<"size of double: "<<sizeof(double)<<std::endl;
	std::cout<<"size of wchar_t: "<<sizeof(wchar_t)<<std::endl;
	
	
	//Write a program that declares and adds two 
	//numbers and gives the sum.

	int m, p, q;
	m = 1000;
	p = 2000;
	q = m + p;
	std::cout<<q<<std::endl;
	
	//COMPUTING NETPAY
	float grosspay, taxrate, tax, netpay;
	std::cout<<"Enter grosspay: ";
	std::cin>>grosspay;
	std::cout<<"Enter taxrate: ";
	std::cin>>taxrate;
	tax = grosspay * taxrate;
	netpay = grosspay - tax;
	std::cout<<"The net payment is: "<<netpay<<std::endl;
	std::cout<<"The tax payable is: "<<tax<<std::endl;
	
    return 0;
}

