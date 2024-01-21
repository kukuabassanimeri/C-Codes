#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*void myFunction()
{
	std::cout<<"I am very excited today, I don't know why!";
}*/
int main()
{
	
	
	std::cout<<"Running"<<std::endl;
	
	/*{
		int a = 10;
		std::cout<<a;
	}*/
	
	//C++ strings
	
	/*{
		string greetings = "hello";
		std::cout<<greetings;
	}*/
	
	//concatenating strings
	/*{
		string firstName = "Abass ";
		string secondName = "Kuku";
		string fullName = firstName + secondName;
		std::cout<<fullName;
	}*/
	
	//appending strings
	/*{
		string firstName = "Abass ";
		string lastName = "Kuku Animeri";
		string fullName = firstName.append(lastName);
		std::cout<<fullName;
	}*/
	
	
	//string length
	/*{
		string Name = "Abasskukuanimeri";
		std::cout<<Name.length();
	}*/
	
	//accessing string
	/*{
		string myName = "AbassKukuanimeri";
		std::cout<<myName[10];
	}*/
	
	
	//user input strings
	/*{
		string fullName;
		std::cout<<"type in your full name: ";
		std::cin>>fullName;
		std::cout<<fullName;
	}*/
	
	
	//user input strings, using getline() function to read a line of text.
	/*{
		string fullName;
		std::cout<<"type in your full name: ";
		getline(cin, fullName);
		std::cout<<fullName;
	}*/
	
	//c++ break & continue statement
	/*for(int i = 0; i < 10; i++){
		if(i == 4){
			break;
		}
		std::cout<<i<<std::endl;
	}*/
	/*for(int i = 0; i < 10; i++){
		if(i == 8){
			continue;
		}
		std::cout<<i<<std::endl;
	}*/
	
	//program that check if your name is correctly spelt when read as input
/*	{
		string Name;
		std::cout<<"type in your name: ";
		std::cin>>Name;
		if(Name == "Abass"){
			std::cout<<Name;
		}else{
			std::cout<<"the name entered is incorrect. ";
		}
	}*/ 
	
	//break statement
	/*{
		int a = 10;
		do{
			std::cout<<a<<std::endl;
			a++;
			if( a > 15){
				break;
			}
		}while(a < 20);
	}*/
	
	//continue statement
	/*{
		int a = 10;
		do{
			if(a == 15){
				a++;
				continue;
			}
			std::cout<<a<<std::endl;
			a++;
		}while(a < 20);
	}*/
	
	//program that reads a value and lists the first ten of its multiples
	/*{
		int value;
		int multiples;
		int n = 1;
		std::cout<<"enter the value: ";
		std::cin>>value;
		while(n <= 10){
			std::cout<<n;
			multiples = value * n;
			std::cout<<multiples<<std::endl;
			n++;
		}*/
		
		/*int value;
    
	    std::cout << "Enter a value: ";
	    std::cin >> value;
	
	    std::cout << "The first 10 multiples of " << value << " are: ";
	
	    for (int i = 1; i <= 10; i++) {
	        int multiple = value * i;
	        std::cout << multiple;
        	if (i < 10) {
            	std::cout << ", ";
       		}
    	}*/
    	
		/*{
			string myname;
			std::cout<<"Enter Your Name: ";
			std::cin>>myname;
			if (myname=="Faith"){
				std::cout<<myname;
				
			}else if(myname=="Abass"){
				std::cout<<myname;
				}else {  
				std::cout<<"Incorrect Name , Check Buda!!!!";
				}
			}*/
			
			/*{
				int number;
				std::cout<<"Enter number: ";
				std::cin>>number;
				if(number%2==0){
					std::cout<<number;
				}
				else{
					std::cout<<"Not even";
					
				}
				
			}*/
			
		/*int number = 2;
			while(number < 51){
				std::cout<<number<<std::endl;
				number = number + 2;
			}*/
		/*	{
			int number, answer;
			std::cout<<"Enter number: ";
			std::cin>>number;
			if(number % 2 == 0){
				answer = number * 3;
				std::cout<<answer;
			}else{
				std::cout<<"the entered number is odd";
			}
			
		}*/
		
		/*{
			int I, P, R, T;
			std::cout<<"enter principle: ";
			std::cin>>P;
			std::cout<<"enter rate: ";
			std::cin>>R;
			std::cout<<"enter time: ";
			std::cin>>T;
			I = (P * R * T)/100;
			std::cout<<I;
		}*/
		/*{
		//C++ FUNCTIONS
		//To call a function, write the function's name followed by two parentheses() and a semicolon.
		
		myFunction(); //Calling the function
		}*/
		
		
		/*{	
			int car = 5;
			switch (car)
			{
				case 1:
				std::cout<<"pajero";
				break;
				case 2:
				std::cout<<"toyota";
				break;
				case 3:
				std::cout<<"mercedes";
				break;
				default:
				std::cout<<"tuk tuk";
			}
		}*/
		
		/*{
			int day = 5;
			switch (day) 
			{
	  			case 6:
	    		std::cout << "Today is Saturday";
	    		break;
	 			case 7:
	    		std::cout << "Today is Sunday";
	    		break;
	 			default:
	   			std::cout << "Looking forward to the Weekend";
			}
		}*/
	
	
	//Write a program whose output is shown
	//following is the list of the items available in the grocery shop
	/*{
		int food_item = 0;
		switch (food_item)
			{
				case 1:
				std::cout<<"chocolates";
				break;
				case 2:
				std::cout<<"toffees";
				break;
				case 3:
				std::cout<<"cokkies";
				break;
				case 4:
				std::cout<<"cakes";
				break;
				default:
				std::cout<<"you have not chosen any item";
					
			}
	}*/
	
	//computing largest of the three numbers
	/*{
		int a, b, c;
		std::cout<<"enter a: ";
		std::cin>>a;
		std::cout<<"enter b: ";
		std::cin>>b;
		std::cout<<"enter c: ";
		std::cin>>c;
		if(a > b)
		{
			std::cout<<"the largest is: "<<a;
		}
		else if(b > c)
		{
			std::cout<<"the largest is: "<<b;
		}
		else{
			std::cout<<"the largest is: "<<c;
		}
	}*/
	
	
	//Evaluating even and odd number
	/*{
		int num;
		std::cout<<"Enter the value of num: ";
		std::cin>>num;
		if(num % 2 == 0)
		{
			std::cout<<"The entered value is even";
		}
		else
		{
			std::cout<<"The entered value is odd";
		}
	}*/
	
	//a program that display numbers from 1 to 20
	/*{
		int number = 1;
		while(number <= 20)
		{
			std::cout<<number<<std::endl;
			number++;
		}
		
	 }*/
	 
	
	//Displaying Numbers, Squares and cubes from 1 to 20
	/*{
		int num = 1;
		std::cout<<"Number \t Square \t Cube"<<std::endl;
		while(num <= 20)
		{
			std::cout<<num<< "\t" << num * num << "\t" <<num * num * num<<std::endl;
			num++;
		}
	}*/
	
	//Displaying the same number using do while loop
	/*{
		int number = 1;
		std::cout<<"Number \t Square \t Cube"<<std::endl;
		do
		{
			std::cout<<number<< "\t" <<number * number<< "\t"<<number * number * number<<std::endl;
			number++;
		}
		while(number <= 20);
	}*/
	
	//displaying the same numbers using for loop
	/*{
		std::cout<<"Number \t Square \t Cube"<<std::endl;
		for(int num = 1; num <= 20; num++)
		{
			std::cout<<num<< "\t" << num * num << "\t" <<num * num * num<<std::endl;	
		}
	}*/
	
	
	//displaying with setwidth Manipulation
	/*std::cout<<"Number"<< setw(20) <<"Square"<<setw(20) <<"Cube"<<std::endl;
	for(int n = 1; n < 21; n++)
	{
		std::cout<<n<<setw(20)<<n * n<<setw(20)<<n * n * n<<std::endl;
	}*/
	
	
	//write a program to sum the even numbers from 2 to 100
	/*{
		int num = 2, sum = 0;
		while(num <= 100)
		{
			sum = sum + num;
			//std::cout<<num<<std::endl;
			std::cout<<sum<<std::endl; 
			num = num + 2;
		}
	}*/
	
	/*{
		int Num1, Num2, Num3;
		cout<<"Input Num1: ";
		cin>> Num1;
		
		cout<<"Input Num2: ";
		cin>> Num2;
		
		cout<<"Input Num3: ";
		cin>>Num3;
		
		if (Num1>Num2)
		{
			cout<<Num1;
		}
		else if (Num2>Num3)
		{
			cout<<Num2;
		}
		else
		{
			cout<<Num3;
		}
	}*/
	
	/*{
		int num;
		for(num = 0; num <= 8; num++)
		{
			int even = num + 2;
			cout<<even<<endl;
			num++;
		}
	}*/
	
	//program to print any number of table
	/*{
		int i, n;
		cout<<"Enter any number: ";
		cin>>n;
		for(i = 1; i <= 10; i++)
		{
			cout<<n<<"*"<<i<<"=" <<n * i<<endl;
		}
	}*/
	
	//program to print numbers in reverse order
	{
		int number, remainder, revNumber = 0;
		cout<<"Enter the digits to reverse: ";
		cin>>number;
		while(number > 0)
		{
			remainder = number % 10;
			number = number / 10;
			revNumber = (revNumber * 10) + remainder;
		}
		cout<<revNumber;
	}
	
	return 0;	
}
