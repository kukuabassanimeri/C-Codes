#include <iostream>
#include <string>
using namespace std;
int main()
{
	//program that calculate the sum of two numbers entered by the user and display the result.
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
	
	//program that compute the average and product of three numbers entered by the user and display the result.
	/*{
		int num1, num2, num3, average, product, sum;
		std::cout<<"input num1: ";
		std::cin>>num1;
		std::cout<<"input num2: ";
		std::cin>>num2;
		std::cout<<"input num3: ";
		std::cin>>num3;
		
		sum = num1 + num2 + num3;
		average = (sum)/3;
		product = num1 * num2 * num3;
		
		std::cout<<average<<std::endl;
		std::cout<<product<<std::endl;
	}*/
	
	//program that solve first degree equation
	/*{
		int X;
		int Y;
		std::cout<<"enter the value of X: ";
		std::cin>>X;
	
		Y = 3 * X + 2;
		std::cout<<Y;
	}*/
	
	//program that compute the area and perimeter of rectangle.
	/*{
		int l, w, area, perimeter;
		std::cout<<"enter the measurement of l: ";
		std::cin>>l;
		std::cout<<"enter the measurement of w: ";
		std::cin>>w;
		
		area = l * w;
		perimeter = 2 * (l + w);
		
		std::cout<<area<<std::endl;
		std::cout<<perimeter<<std::endl;
	}*/
	
	//program that calculate the area of circle whose radius is known
	/*{
		int R, Area;
		std::cout<<"enter the value of the R:";
		std::cin>>R;
		Area = 3.14 * R * R;
		std::cout<<Area<<std::endl;
	}*/
	
	/*//program to calculate the number of years given that the number of months is known
	int years, months;
	std::cout<<"enter the number of months: ";
	std::cin>>months;
	years = months/12;
	std::cout<<years;*/
	
	//C++ conditions and if statement
	//the if statement skeleton
	/*{
		int x = 20;
		int y = 18;
		if(x > y)
		{
			std::cout<<"x is greater than y";
		}
	}*/
	
	//the else statement
	/*int time = 20;
	if(time < 18){
		std::cout<<"Good day. ";
	}else{
		std::cout<<"Good evening. ";
	}*/
	
	//the else if statement
	/*int time = 22;
	if(time < 10){
		std::cout<<"Good morning. ";
	}else if(time > 20){
		std::cout<<"Good day. ";
	}else{
		std::cout<<"Good evening. ";
	}*/
	
	//c++shorthand if else statement(Ternary operator)
	/*{
		int time = 20;
		string result = (time < 18) ? "Good day." : "Good evening. ";
		std::cout<<result;
	}*/
	
	//program that will obtain exam score from the user and determine 
	//whether the score is greater than or equal to 50
	//and display the message “ ????”.
	
	/*int score;
	std::cout<<"enter the score value: ";
	std::cin>>score;
	if(score >= 50){
		std::cout<<"“ ????”. ";
	}else{
		std::cout<<"the score value is less than or not equal to 50.";
	}*/
	
	/*{
		int Examscore;
		cout<<"Enter the exam score: ";
		cin>>Examscore;
		
		if(Examscore >= 50)
		{
			cout<<"You have passed the course";
		}
		else
		{
			cout<<"You have to redo the course";
		}
	}*/
	
	//program that will calculate the division of two numbers. Determine whether the divisor eqauls zero
	//and display the message unknown
	
	/*{
		int num1, num2, result;
		std::cout<<"enter the value of num1: ";
		std::cin>>num1;
		std::cout<<"enter the value of num2: ";
		std::cin>>num2;
		if(num2 == 0){
			std::cout<<"Unknown. ";
		}else{
			result = num1 / num2;
			std::cout<<result;
	}
	}*/
	
	//program that obtain number from user, determine the number type, even or odd, and display the result
	
	/*{
		int number;
		std::cout<<"enter the number: ";
		std::cin>>number;
		if(number % 2 == 0){
			std::cout<<"Even. ";
		}else{
			std::cout<<"Odd. ";
		}
	}*/
	
	//program that get temp degree from the user and print out, greater than zero, less than zero, equal zero.
	
	/*{
		int temp;
		std::cout<<"enter the temp value: ";
		std::cin>>temp;
		if(temp > 0){
			std::cout<<"greater than zero. ";
		}else if(temp == 0){
			std::cout<<"equals to zero. ";
		}else{
			std::cout<<"less than zero ";
		}
	}*/
	
	//program to compute two numbers entered by the user and print the largest is...and the smallest is...
	/*{
		int num1, num2;
		std::cout<<"enter num1: ";
		std::cin>>num1;
		std::cout<<"enter num2: ";
		std::cin>>num2;
		if(num1 > num2){
			std::cout<<"the largest is: "<<num1<<std::endl;
			std::cout<<"the smallest is: "<<num2<<std::endl;
		}else if(num2 > num1){
			std::cout<<"the largest is: "<<num2<<std::endl;
			std::cout<<"the smallest is: "<<num1<<std::endl;
		}else{
			std::cout<<"both num1 & num2 are equal";
		}
	}*/
	
	//looping in C++, the while loop, repeately executes a target statement as long as the given condition is true
	/*{
		int a = 10;
		while (a < 20){
			std::cout<<a<<std::endl;
			a++;
		}
	}*/
	
	//the for loop, repetition control structure that allows you to efficiently write a loop that needs to execute 
	//a specific number of times
	/*{
		for (int a = 10; a < 30; a++){
			std::cout<<a<<std::endl;
	}  
	}*/
	
	//the do...while loop, check its condition at the bottom of the loop
	
	/*{
		int a = 10;
		do{
			std::cout<<a<<std::endl;
			a++;
		}while(a < 15);//always have the semi-colon here!
	}*/
	//program that reads in the radius of a circle as integer and prints, its diameter, circumference and area
	//use constant 3.1459 as the PI.
	/*{
		int R, D, C, A;
		double const PI = 3.14159;
		std::cout<<"enter the value of R: ";
		std::cin>>R;
		D = 2 * R;
		C = 2 * PI * R;
		A = PI * R * R;
		std::cout<<D<<std::endl;
		std::cout<<C<<std::endl;
		std::cout<<A<<std::endl;
	}*/
	
	//program to calculate the Area of a circle whose radius "R".
	//so that it displays the message "not allowed "and exits
	// from the program (When the value of "R" is negative).
	/*{
		int R, A;
		double const PI = 3.142;
		std::cout<<"enter the value of radius: ";
		std::cin>>R;
		if(R < 0){
			std::cout<<"not allowed";
		}else{
			A = PI * R * R;
			std::cout<<A;
		}
	}*/
	
	
	//program that prints out numbers from 1 to 3.
	//method 1.
	/*{
		int number = 1;
		while(number < 4){
			std::cout<<number<<std::endl;
			number++;
		}
	}*/
	//method 2
	/*{
		int a = 1;
		while(a <= 3){
			std::cout<<a<<std::endl;
			a++;
		}
	}*/
	
	//program to print out even numbers from 1 to 10.
	//method 1
	/*{
		int n = 2;
		while(n < 12){
			std::cout<<n<<std::endl;
			n = n + 2;
		}
	}*/
	
	//method 2
	/*{
		int n = 2;
		while(n <= 10){
			std::cout<<n<<std::endl;
			n = n + 2;
		}
	}*/
	
	//program to print out the sum of integer numbers from 1 to 3
	/*{
		int sum = 0;
		int a = 1;
		while(a <= 3){
			std::cout<<a<<std::endl;
			sum = sum + a;
			a++;
		
		}
			std::cout<<sum<<std::endl;
	}*/
	//progrram that calculates the simple interest on a sum of money using the formula I = PRT/100
	/*{
		int P, R, T, I;
		std::cout<<"enter the value of P: ";
		std::cin>>P;
		std::cout<<"enter the vale of R: ";
		std::cin>>R;
		std::cout<<"enter the vale of T: ";
		std::cin>>T;
		I = (P * R * T) / 100;
		std::cout<<I;
	}*/
	//program that calculates the sum of all even numbers from 1 to 20 inclusive.
	/*{
		int sum = 0;
		int i = 1;
		while(i <= 20){
			i++;
		}if(i % 2 == 0){
			sum = sum + i;
		}
		std::cout<<sum<<std::endl;
	}*/
	
	/*{
		int sum = 0;
		for(int i = 1; i <= 20; i++){
			if(i % 2 == 0){
				sum = sum + i;
			}
			std::cout<<i<<std::endl;
		}
		std::cout<<sum<<std::endl;
	}*/
	
	//program that calculates the sum of all even numbers from 1 to 20 inclusive.
	/*{	
		int sum = 0;
		int i = 2;
		while(i <= 20){
			std::cout<<i<<std::endl;
			sum = sum + i;
			i = i + 2;
		}
		std::cout<<sum<<std::endl;
	}*/
	
	/*{	
		int sum = 0;
		int i = 1;
		while(i <= 20){
			if (i == 1) {
				
    			sum = sum + i;
    			i++;
			} else if (i % 2 != 0) {
				
				i++;
    			continue;
			} else {
				std::cout<<i<<std::endl;
    			sum = sum + i; 
				i++;  
			}
		}
		std::cout<<sum<<std::endl;
	}*/
	//program that reads a number and check if it's even, if this is the case, the program should multiply
	//the number by 3 and display the answer.
	/*
		int number;
		int answer;
		std::cout<<"enter the number: ";
		std::cin>>number;
		if(number % 2 == 0){
			cout<<"The number you entered is even"<<endl;
			answer = number * 3;
			std::cout<<"The result is :"<<answer;
		}else{
			std::cout<<"the number entered is not even. ";
		}
	}*/
	
	//program that reads a number and check if it's even, in which case the number is displayed on the screen
	/*{
		int number;
		std::cout<<"enter the number: ";
		std::cin>>number;
		if(number % 2 == 0){
			std::cout<<number;
		}else{
			std::cout<<"the number entered is not even. ";
		}
	}*/
	
	//program that print out the sum of odd numbers from 1 to 10
	/*{
		int sum = 0;
		int num = 1;
		while(num <= 10){
			std::cout<<num<<std::endl;
			sum = sum + num;
			num = num + 2;
		}
		std::cout<<sum<<std::endl;
	}*/
	
	//program that print out the sum of even numbers from 1 to 10
	/*{
		int sum = 0;
		int num = 2;
		while(num <= 10){
			std::cout<<num<<std::endl;
			sum = sum + num;
			num = num + 2;
		}
		std::cout<<sum<<std::endl;
	}*/
	
	
	/*{
		//write a program that reads a given currency and the respective amount. 
		//then the program should the convert the given amount to ksh
		float amount;
		float conversionrate;
		string currencycode;
		float convertedamount;
		
		std::cout<<"Enter the currency code(eg, USD, EUR, GBP: ";
		std::cin>>currencycode;
		
		std::cout<<"Enter the amount:";
		std::cin>>amount;
		
		//set  the conversion rate based on the currency code
		if(currencycode == "USD")
		{
			conversionrate = 110;
		}
		else if(currencycode == "EUR")
		{
			conversionrate = 125;
			
		}
		else if(currencycode == "GBP")
		{
			conversionrate = 140;
		}
		else
		{
			std::cout<<"currency entered is not supported";
		}
		//convert the amount to ksh
		convertedamount = amount * conversionrate;
		std::cout<<amount<<currencycode<<"is equivalent to"<<convertedamount<<"ksh"<<std::endl;
	
	}*/
	
	
	/*{
		string name;
		std::cout<<"Enter your name: ";
		std::cin>>name;
		
		//check if the name is correctly spelt
		if (name == "Abass")
		{
			std::cout<<"The name is correctly spelt"<<std::endl;
		}
		else
		{
			std::cout<<"The name entered is mispelt"<<std::endl;
		}
	}*/
	
	
	/*{
		//Admission to college
		float maths, physics, chemistry, meanscore;
		cout<<"Enter the score for maths: ";
		cin>>maths;
		cout<<"Enter the score for physics: ";
		cin>>physics;
		cout<<"Enter the score for chemistry: ";
		cin>>chemistry;
		
		meanscore = (maths + chemistry + physics) / 3;
		if(maths >= 80 && physics >= 75 && chemistry >= 70 && meanscore >= 80)
		{
			cout<<"You have qualified for engineering program";
		}
		else
		{
			cout<<"You have not met the qualifications";
		}
	}*/
	
	{
		//add two fractions
		int num1, num2, den1, den2, result = 0;
		cout<<"Enter the value of num1: ";
		cin>>num1;
		cout<<"Enter the value of den1: ";
		cin>>den1;
		cout<<"Enter the value of num2: ";
		cin>>num2;
		cout<<"Enter the value of den2: ";
		cin>>den2;
		
		if(den1 == den2)
		{
			result = num1 + num2;
			cout<<num1<< " / " <<den1<< " + " <<num2 << " / " <<den2<< " = " <<result << "/" <<den1;
		}
		else
		{
			num1 = num1 * den2;
			num2 = num2 * den1;
			result = num1 + num2;
			cout<<num1<< " / " <<den1 << " + "<<num2<< "/ " <<den2<< " = "<<result << " / " <<den1 * den2;
			
		}
		
	}
	
	return 0;
}

