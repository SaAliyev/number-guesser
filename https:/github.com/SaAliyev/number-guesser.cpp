#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    long long int lowerbound,upperbound;
    cout<< "Welcome! To start, set upper and lower bounds:"<<endl;
    cout<< "Lowerbound:"<<endl;
    cin>> lowerbound;
    cout<<"Upperbound:"<<endl;
    cin>> upperbound;
    
	srand(time(0));
	int target= rand() % (upperbound - lowerbound + 1) + lowerbound;
	while(1){
	    cout<<"Type in your guess:"<<endl;
	    int guess;
	    cin>>guess;
	    if(guess==target){
	        cout<<guess<<" is the correct answer! ";
	        break;
	    }
	    else if (guess<target) 
	        cout<<"Too low, try again:"<<endl;
	    else 
	        cout<<"Too high, try again:"<<endl;
	}
	return 0;
}
