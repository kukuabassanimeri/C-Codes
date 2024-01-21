#include <iostream>
#include <string>
#include<stdlib.h>
#include<math.h> 
using namespace std;
int main()
{
	/*{
		int numA;
		int numB;
		int result;
		cout<<"enter num a: ";
		cin>> numA;
		cout<<"enter num b: ";
		cin>>numB;
		result=numA + numB;
		cout<<result;
	
	}*/
	
	/*{
		int numA;
		int numB;
		int numC;
		int product;
		int average;
		cout<<"enter num A";
		cin>>numA;
		cout<<"enter num B";
		cin>>numB;
		cout<<"enter num C";
		cin>>numC;
		product=(numA*numB*numC);
		cout<<product<<endl;
		average=(numA+numB+numC)/3;
		cout<<average;
		
		
	}*/
	
	//program that adds two numbers entered by the user
	/*{
		int A, B, C;
		cout<<"Enter A:: ";
		cin>>A;
		cout<<"Enter B:: ";
		cin>>B;
		C = A + B;
		cout<<"Sum of two numbers [ "<<A<<" + "<<B<<" ] = "<<C<<"\n";
	}*/
	
	/*{
		//Program to Find Quotient and Remainder of 2 numbers
		int Q, R, D, d;
		cout<<"Enter the value of D:: ";
		cin>>D;
		cout<<"Enter the value of d:: ";
		cin>>d;
		Q = D/d;
		cout<<Q<<endl;
		R = D % d;
		cout<<R;
	}*/
	
	//Program to Check Character is Uppercase, Lowercase, Digit or Special
	/*{
		char chara;
		cout<<"Enter the character eg(Uppercase, Lowercase, Digit or Special):: ";
		cin>>chara;
		if(chara >= 65 && chara <= 90)
		{
			cout<<"The character entered [ "<<chara<<" ] is uppercase"<<endl;
		}
		else if(chara >= 97 && chara <= 122)
		{
			cout<<"The character entered [ "<<chara<<" ] is lowercase"<<endl;
		}
		else if(chara >= 48 && chara <= 57)
		{
			cout<<"The character entered [ "<<chara<<" ] is digit"<<endl;
		}
		else
		{
			cout<<"The character entered [ "<<chara<<" ] is special"<<endl;
		}
		
	}*/
	
	/*{
		//Program to Display ASCII Value of a Character	
	    char c;
	    cout << "Enter any Character :: ";
	    cin >> c;
	    cout << "The ASCII Value of Character [ "<< c << " ] is: " << int(c)<<"\n";
	}*/
	
	/*{
		//Program to Display ASCII Value of a Character	
		char z;
		std::cout<<"Enter any of character: ";
		std::cin>>z;
		std::cout<<int(z);
	}*/
	
	/*{
		//Program to display numbers randomly
		int i;
		int num;
		for (i = 1; i <= 10; i++)
		{
			num = rand() % 100;
			cout<<num<<endl;
		}
	}*/
	
	/*{
		// Program to Find Sum and Average of three numbers
		int num1, num2, num3, sum, average;
		cout<<"Enter num1: ";
		cin>>num1;
		cout<<"Enter num2: ";
		cin>>num2;
		cout<<"Enter num3: ";
		cin>>num3;
		sum = num1 + num2 + num3;
		cout<<sum<<endl;
		average = (num1 + num2 + num3)/3;
		cout<<average<<endl;
	}*/
	
	/*{
		//Program to raise any number X to power N
		int x, n, result;
		cout<<"Enter the value of x: ";
		cin>>x;
		cout<<"Enter the value of n: ";
		cin>>n;
		result = pow(1 + x, n);
		cout<<result;
	}*/
	
	/*{
		//Program to find Square Root of a number using sqrt() function
		double num1, sqroot;
		cout<<"Enter the value of num1: ";
		cin>>num1;
		sqroot = sqrt(num1);
		cout<<sqroot;
	}*/
	
	
	/*{
		//Program to Convert Days Into Years Weeks and Days
		int days;
		double years;
		double weeks;
		
		std::cout<<"Enter the number Of days: ";
		std::cin>>days;
		
		years = days / 365;
		std::cout<<years<<std::endl;
		days = days % 365;
		//std::cout<<days<<std::endl;
		weeks = days / 7;
		std::cout<<weeks<<std::endl;
		days = days % 7;
		std::cout<<days<<std::endl;
	}*/
	
	{
		//Program to Calculate Compound Interest
		double compdint;
		int time;
		int rate;
		int principle;
		
		std::cout<<"Enter the number of years: ";
		std::cin>>time;
		std::cout<<"Enter the rate: ";
		std::cin>>rate;
		std::cout<<"Enter the amount of principle: ";
		std::cin>>principle;
		
		compdint = principle * pow((1 + rate/100), time);
		std::cout<<compdint;
	}
	
	
	//program to calculate compound Interest
	{
		int p, r,  t, A;
		cout<<"Enter p: ";
		cin>>p;
		cout<<"Enter r: ";
		cin>>r;
		cout<<"Enter t: ";
		cin>>t;
		//cout<<"Enter n: ";
		//cin>>n;
		A = p * pow((1+r/100), t);
		cout<<A<<endl;
		
	}
	
	 float p,r,t,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest :: ";
    cin>>r;
    cout<<"\nEnter Time Period :: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";
	
	return 0;
	
}
