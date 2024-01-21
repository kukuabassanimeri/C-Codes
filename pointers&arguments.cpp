#include <iostream>
using namespace std;

int main()
{
	//a program that uses argument to print the output
	
	/*{
		int ival = 1024;
		int &refval = ival;
		std::cout<<ival<<std::endl<<refval<<std::endl;
		
		refval = 1000;
		std::cout<<ival<<std::endl<<refval;
	}*/
	
	// a program that uses pointer to print the output
	/*{
		int ival = 50;
		int *p = &ival;
		std::cout<<ival<<std::endl<<p<<std::endl<<*p<<std::endl;
		*p = 51;
		std::cout<<ival<<std::endl<<p<<std::endl<<*p<<std::endl;
		ival = 52;
		std::cout<<ival<<std::endl<<p<<std::endl<<*p<<std::endl;	
	}*/
	
	//creating an array
	/*{
		int arr[3] = {10, 20, 30};
		std::cout<<arr[1];
	}*/
	
	//a program to illustrate how to traverse an array
	/*{
		int Arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
		for (int i = 0; i < 10; i++)
		{
			std::cout<<Arr[i]<<std::endl;
		}
	}*/
	
	//a program to illustrate how to find the size of an array
	/*{
		int arr[] = {1, 2, 3, 4, 5};
		
		//print size of an element of array
		std::cout<<"Size of arr[0]: "<<sizeof(arr[0])<<std::endl;
		
		//size of array 'arr'
		std::cout<<"Size of arr: "<<sizeof(arr)<<std::endl;
		
		//length of array
		int n = sizeof (arr) / sizeof(arr[0]);
		std::cout<<"Length of an array: "<<n<<std::endl;
	}*/
	
	//a program to illustrate that array name is a pointer
	/*{
		int arr[] = {1, 2, 3, 4, 5};
		
		//define a pointer
		int *ptr = arr;
		
		//print address of the array using array name
		std::cout<<"Memory address of arr: "<<&arr<<std::endl;
		
		//print address of the array using ptr
		std::cout<<"Memory address of arr: "<<ptr<<std::endl;
	}*/
	
	//program to print array element without indexing
	/*{
		//define an array
		int arr[] = {11, 22, 33, 44};
		//print an elements of array
		std::cout<<"First element: "<<*arr<<std::endl;
		std::cout<<"Second element: "<<*(arr + 1)<<std::endl;
		std::cout<<"Third element: "<<*(arr + 2)<<std::endl;
		std::cout<<"Four element: "<<*(arr + 3)<<std::endl;
	}*/
	
	//program to print the following numbers
	/*{
		int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
		int i;
		for (i = 0; i < 9; i++)
		{
			std::cout<<a[i]<<std::endl;
		}
	}*/
	
		//program to print the following numbers in reverse order
	/*{
		int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
		int i;
		for (i = 8; i >= 0; i--)
		{
			std::cout<<a[i]<<std::endl;
		}
	}*/
	
	//Create an array that contains the numbers 1 to 10. Using a while loop, output the contents of 
	//this array on the screen
	/*{
		int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int i;
		while(i < 10)
		{
			std::cout<<array[i]<<std::endl;
			i++;
		}
	}*/
	
	//A program is required 
	//to calculate the perimeter of a rectangle whose width is 20 and length is 50.
	/*{
		int p, l, w;
		l = 50;
		w = 20;
		p = 2 * (l + w);
		std::cout<<p<<std::endl;
	}*/
	
	// Write a program that reads in the age of a student and checks if the entered age is 
	//between 20 and 25.
	
	{
		int age;
		std::cout<<"Enter the age value: ";
		std::cin>>age;
		if(age >= 20 && age <= 25)
		{
			std::cout<<"You are an adult"<<std::endl;
		}
		else
		{
			std::cout<<"That age has not been considered"<<std::endl;
		}
	}
	
	return 0;
}
