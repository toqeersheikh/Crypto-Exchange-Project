#include<iostream>
using namespace std;
// namespace: contains lots of ready made components like: functions and classes etc 
// a cross platform library

int main()
{
	bool condition=true;
	//putting everything in a while loop to run an infinite loop so that our application keep running
	while(condition)
	{
		//Print Menu
		
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
		
		cout<<"===================="<<endl;
		cout<<"Type in an option between: 1 to 7"<<endl;
		
		int inputOption;
		cin>>inputOption;
		
		cout<<"You selected: "<<inputOption<<endl;
		
		cout<<endl;
		
		if(inputOption==0){
			cout<<"Invalid Choice.Choose 1-7"<<endl;
			cout<<endl;
			
		}
		
		if(inputOption==1){
			cout<<"Help! Your aim is to make money.Analyse the market, make bids and offers"<<endl;
		    cout<<endl;
		}
		
		if(inputOption==2){
			cout<<"Market looks good."<<endl;
			cout<<endl;
		}
		
		if(inputOption==3){
			cout<<"Mark and offer.Enter amount."<<endl;
			cout<<endl;
		}
		
		if(inputOption==4){
			cout<<"Make a bid.Enter Amount."<<endl;
			cout<<endl;
		}
		
		if(inputOption==5){
			cout<<"Your wallet is empty!"<<endl;
			cout<<endl;
		}
		if(inputOption==6){
			cout<<"Going to next time frame!"<<endl;
			cout<<endl;
		}
		if(inputOption==7){
			cout<<"Exit the app:)"<<endl;
			cout<<endl;
			condition=false;
		}
		
		
	}
	
	
}