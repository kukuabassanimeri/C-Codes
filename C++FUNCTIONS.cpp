#include <iostream>
#include <string>
using namespace std;

//creating functions
//To call a function, write the function's name, followed by two parentheses() and semi colon(;)

//function to find the maximun of two numbers
//function declaration
int max(int num1, int num2);

//function to print the names of the countries
void myCountries(string country = "Norway")
{
	std::cout<<country<<std::endl;	
}

//function to display a message
void myFunction()
{
	std::cout<<"I am wishing you all the best in your examination!"<<std::endl;
}

//passing function by value
//function declaration
int add (int number);


//passing function by value.
//adding two numbers
int sum(int a, int b)
{ //function declaration
	int sum; //function definition, it can be perform outside the main body.
	sum = a + b;
	return(sum);
}


//function declaration
float square(float x);

//function declaration
long int factorial(int n);

//function to find the factorial of a given number
//function declaration
//unsigned int factorial(unsigned int n);

//Using for loop to find the factorial of a given number
long int factor(long int n); 

//b)Use C++ function called "area", to calculate the area of a rectangle. 
//The length and width must be entered through the keyboard and passed to calling function

//function declaration
int area(int x, int y);

//function that swaps two numbers
//function declaration 
void swap(int x, int y);

//function for default values
//function declaration
int Add(int a, int b = 20);

//function to find the area of rectangle
//function declaration
int areaofRect(int length, int width);

//function to print table of numbers
int table(int x, int y);


//function to print numbers in reverse order
//function declaration
int reverse(int number);

//function to find the area of triangle
//function declaration
int areaofTri(int h, int W);

//Main body code.

int main()
{
	/*{
	myFunction();   //calling the function
	
	//local variable declaration
	}*/
	
	/*{
	int a = 100;
	int b = 200;
	int ret;
	
	ret = max(a, b);
	std::cout<<ret<<std::endl;
	}*/
	
	//C++ default values for parameters
	/*{
		int x = 500;
		int y = 2000;
		int result;
		
		result = Add(x, y); 
		cout<<result<<endl;
		
		result = Add(x);
		cout<<result<<endl;
	}*/
	
	//program to find the area of rectangle
	/*{
		int l = 200;
		int w = 50;
		int Area;
		
		//call function
		Area = areaofRect(l, w);
		cout<<Area<<endl;
	}*/
	
	//function to print table of numbers
	/*{
		int i, n, result;
		cout<<"Enter any number: ";
		cin>>n;
		for(i = 1; i <= 10; i++)
		{
			result = table(n, i);
			cout<<result<<endl;
		}		
	}*/
	
	//function to print numbers in reverse order
	/*{
		int number, result;
		cout<<"Enter the digits to reverse: ";
		cin>>number;
		
		result = reverse(number);
		cout<<result<<endl;
	}*/
	
	//program to find the area of triangle using function
	int length, width;
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter width: ";
	cin>>width;
	//function calling
	int Area = areaofTri(length, width);
	cout<<Area;
	
	//printing countries
	/*{
		myCountries();
		myCountries("Sudan");
		myCountries("Kenya");
	}*/
	
	//function passing by value
	/*{
		int number, result;
		number = 5;
		std::cout<<"the initial value of number: "<<number<<std::endl;
		result = add(number);//function call
		std::cout<<"the final value of number: "<<number<<std::endl;
		std::cout<<"the result is: "<<result<<std::endl;
	}*/
	
	//function passing by value
	//program that add two numbers and return the sum
	/*{
		int num1, num2, add;
		std::cout<<"Enter the value of num1: ";
		std::cin>>num1;
		std::cout<<"Enter the value of num2: ";
		std::cin>>num2;
		add = sum(num1, num2);
		std::cout<<add;
	}*/
	
	//C++ reference
	/*{
		string food = "Pizza";
		string &meal = food;
		std::cout<<food<<std::endl;
		std::cout<<meal<<std::endl;
		//you can either used the variable name food, or the reference name meal to refer to the food variable
	}*/
	
	/*{
		//C++ Memory address
		//& is used to get the memory address of the variable
		string food = "pizza";
		std::cout<<& food; 
	}*/
	
	//a function call to find the square of number entered by the user.
	/*{
		float m, n;
		std::cout<<"Enter the value of m to square: ";
		std::cin>>m;
		
		//function call
		n = square(m);
		std::cout<<n;
	}*/
	
	/*{
		int n;
		std::cout<<"enter the value of n: ";
		std::cin>>n;
		
	}*/
	
	/*{
		//program to find the factorial of a given number
		int num;
		int fac;
		std::cout<<"Enter the value of num: ";
		std::cin>>num;
		fac = factorial(num);
		std::cout<<fac<<std::endl;	
	}*/
	
	//function to find the factorial of given number using for loop
	/*{
		int num;
		std::cout<<"Enter the value of num: ";
		std::cin>>num;
		int fact;
		fact = factorial(num);
		std::cout<<fact<<std::endl;
	}*/
	
	//program that calculate the area of rectangle.
	/*{
		int l, w, Area;
		cout<<"Enter the value of l: ";
		cin>>l;
		cout<<"Enter the value of w: ";
		cin>>w;
		
		//function calling
		Area = area(l, w);
		cout<<Area;
	}*/
	
	//program that swaps two numbers
	/*{
		int a = 400;
		int b = 1000;
		
		cout<<a<<endl;
		cout<<b<<endl;
		
		//call the function
		swap(a, b);
		cout<<a<<endl;
		cout<<b<<endl;
		
	}*/
	
	return 0;
}

//function to print digits in reverse order
//function definition
int reverse(int x)
{
	int rem, revnum = 0;
	while(x > 0)
	{	
		rem = x % 10;
		revnum = (revnum * 10) + rem;
		x = x / 10;
		
	
	}
	return(revnum);
}

//calculating area of triangle using functions
//function definition
int areaofTri(int h, int w)
{
	int area = (h * w) / 2;
	return (area);
}

//printing table of numbers
//function definition
int table(int x, int y)
{
	int table = (x * y);
	return(table);
}

//Area of rectangle
//function declarator
int areaofRect(int length, int width)
{
	int A;
	A = length * width;
	return(A);
}

//default values
//function declarator
int Add(int a, int b)
{
	int answer;
	answer = a + b;
	
	return(answer);
}

//function declarator
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout<<x<<endl;
	cout<<y<<endl;
	return;
}

//function declarator
int area(int x, int y)
{
	int A;
	A = x * y;
	return A;
}

//function declarator
long int factor(long int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = res * i;	
	}
	return (res);
}

//function declarator

unsigned int factor(unsigned int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factor(n-1));
	}
}

//function declarator
long int factorial(int n)
{
	if(n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

//function declarator
float square(float x)
{
	float p;
	p = x * x;
	return p;
}

//function declarator
int max(int num1, int num2)

{	
	int result;
	if(num1 > num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return result;
}

//function declarator
int add (int number)
{
	number = number + 100;
	return(number);
}
