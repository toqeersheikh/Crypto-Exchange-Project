#include<iostream>
using namespace std;
// namespace: contains lots of ready made components like: functions and classes etc 
// a cross platform library

/** Print Menu */
void printMenu()
{
		
		// 1. Print Help:
		cout<<"1: Print Help"<<endl;	
		//2. Print Exchange Stats:
		cout<<"2: Print exhange Stats"<<endl;
		//3. Make an offer:
		cout<<"3: Make an offer"<<endl;
		//4. Make a bid:
		cout<<"4: Make a bid"<<endl;
		//5. Print Wallet:
		cout<<"5: Print Wallet"<<endl;
		//6. Continue:
		cout<<"6: Continue"<<endl;
	    //	7. Exit:
		cout<<"7: Exit"<<endl;
		
}

// Menu Functions
void printHelp()
{
	cout<<"Help! Your aim is to make money.Analyse the market, make bids and offers"<<endl;
	cout<<endl;
}

void printMarketStats()
{
	cout<<"Market looks good."<<endl;
	cout<<endl;
}

void enterOffer()
{
	cout<<"Mark an offer.Enter amount."<<endl;
	cout<<endl;
}

void enterBid()
{
	cout<<"Make a bid.Enter Amount."<<endl;
	cout<<endl;
	
}

void printWallet()
{
	cout<<"Your wallet is empty!"<<endl;
	cout<<endl;
}

void goToNextTimeframe()
{
	cout<<"Going to next time frame!"<<endl;
	cout<<endl;
}

bool exit()
{
	cout<<"Exit the app:)"<<endl;
	cout<<endl;
	bool condition =false;
	return condition;
}

// get input from user 
int getUserOption()
{
	    cout<<"Type in an option between: 1 to 7"<<endl;
		
		int inputOption;
		cin>>inputOption;
		
		cout<<"You selected: "<<inputOption<<endl;
		
		cout<<endl;
		return inputOption;
}

// process input and do relevant action
bool processInput(int inputOption)
{
	bool condition;
	
    if(inputOption<=6)
	{
       if(inputOption==0){
			cout<<"Invalid Choice.Choose 1-7"<<endl;
			cout<<endl;
			
		}
		
		if(inputOption==1)
		{
			printHelp();
		}
		
		if(inputOption==2)
		{
		    printMarketStats();
		}
		
		if(inputOption==3)
		{
			enterOffer();
		}
		
		if(inputOption==4)
		{
			enterBid();
		}
		
		if(inputOption==5)
		{
		    printWallet();
		}
		if(inputOption==6)
		{			
		   goToNextTimeframe();	
		
		}	
		
		condition =true;
		return condition;  	
	}	
	else
	{	
		condition =exit();	
		return condition;
	}	
}

// main function:
int main()
{
	bool condition=true;
	//putting everything in a while loop to run an infinite loop so that our application keep running
	
	while(condition)
	{
		printMenu();
		
		cout<<"===================="<<endl;
	
        int inputOption = getUserOption();
	
	    condition =	processInput(inputOption);	
	}
	
	
	
}