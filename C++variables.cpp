#include <iostream>
#include <string>
#include<stdlib.h>
#include<math.h> 
using namespace std;

//variable declaration
//extern int a, b;
//extern int c;
//extern float f;

//global variable declaration
//int g;

int main()
{
	//variable definition
	//int a, b;
	//int c;
	//float f;
	
	//actual initialization
	//a = 10;
	//b = 30;
	//c = a + b;
	//std::cout<<c<<std::endl;
	
	//f = 100.0/50.0;
	//std::cout<<f<<std::endl;
	
	//local variable declaration
	//int x, y;
	//int z;
	
	//actual initialization
	//x = 200;
	//y = 500;
	//	z = x + y;
	//std::cout<<z<<std::endl;
	
	//g = x + y;
	//std::cout<<g<<std::endl;
	
	//C++ Numeric data types
	
	//integers
	//int myNum = 1000;
	//std::cout<<myNum<<std::endl;
	
	//floats
	//float Num = 10.25;
//std::cout<<Num<<std::endl;
	
	//double
	//double Number = 100.99;
	//std::cout<<Number<<std::endl;
	
	//scientific numbers
	//float f1 = 35e3;
	//double d1 = 12E4;
	//std::cout<<f1<<std::endl;
	//std::cout<<d1<<std::endl;
	
	//write a program that calculate average of two numbers
	/*{
		int num1, num2;
		int average;
		int sum;
		std::cout<<"input num1: ";
		std::cin>>num1;
		std::cout<<"input num2: ";
		std::cin>>num2;
		sum = num1 + num2;
		average = (sum)/2;
		std::cout<<"The sum is: "<<sum<<std::endl;
		std::cout<<"The average is equal to: "<<average<<std::endl;
	}*/
	
	
	
	//program to add two numbers entered by the user and display the result
	/*{
		int A;
		int B;
		int sum;
		std::cout<<"enter the value of A: ";
		std::cin>>A;
		std::cout<<"enter the value of B: ";
		std::cin>>B;
		sum = A + B;
		std::cout<<sum<<std::endl;
	}*/
	
	//program to check if number is prime
	/*{
		int i, n;
		cout<<"Enter the any value of n: ";
		cin>>n;
		
		if(n <= 1) //or if(n == 1)
		{
			cout<<"2";
		}
		for(i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				cout<<"The number entered is not prime"<<endl;
				break;
			}
		}
		if(n == i)
		{
			cout<<"The number entered is prime"<<endl;
		}
	}*/
	
	//Program to Generate Fibonacci Series for N numbers
	/*{
		int i, numbers, first, next, second;
		first = 0;
		second = 1;
		cout<<"Enter the number of terms to display: ";
		cin>>numbers;
		
		for(i = 0; i < numbers; i++)
		{
			cout<<first<<endl;
			next = first + second;
			first = second;
			second = next;
		} 
	}*/
	
	/*{
		string username, password;
		cout<<"Enter the username: ";
		cin>>username;
		cout<<"Enter the password: ";
		cin>>password;
		if(username == "program" && password == "bbit")
		{
			cout<<"Welcome, login successful";
		}
		else
		{
			cout<<"Access denied";
		}

	}*/
	
	
	/*{
		int n, p;
		float r = 0.12;
		double A;
		double compoundI;
		cout<<"Enter the value of principle: ";
		cin>>p;
		cout<<"Enter the number of years: ";
		cin>>n;
		A = p * pow(1 + r, n);
		cout<<A<<endl;
		compoundI = A - p;
		cout<<compoundI;

	}*/
	
	{
		int rev[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
		int i;
		for(i = 19; i >= 0; i--)
		{	
			//rev[i] = rev[i] - i; 
			cout<<rev[i]<<endl;
		}

	}
	
	
	
	return 0;	
}
