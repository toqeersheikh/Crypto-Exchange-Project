#include<iostream>
using namespace std;

// We can define just the prototypes of functions here and then implement them anywhere:
// The reason to do this is to just make our code look clean and more readable
// And defining prototypes above of main function will make us able to access them in main
// otherwise if we do not implement above of main function then it is not possible to use them in main 
// thats just the policy of c++, because main() is the starting point of any program in c++

// Function Prototypes or Also known as Signature:

void printHello();
float average(float x, float y);


// main function:
int main()
{
	printHello();
	float avg=average(3.2,7.1);
	
	cout<<avg<<endl;
	
	return 0;
}



// implementing functions below main function:
void printHello()
{
	cout<<"Hello World"<<endl;
}

float average(float x, float y)
{
	return (x+y)/2;
}