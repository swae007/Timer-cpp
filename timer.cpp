#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;


int getTimer()
{
	cout<<"Enter digit to countdown from: ";
	
	int x{};
	cin>>x;
	
	return x;
}

void countdown()
{
	string unit ="";
	char again = 'y';
	
	
	while (again == 'y' || again == 'Y'){
	
	    cout<< "\n" << "Enter time unit to count for, s for seconds, m for minute and h for hour: ";
	    cin>>unit;

	    if (unit == "s" || unit == "S")
    	{
	        for (int i {getTimer()}; i>=0; i-=1)
	        {
    		    cout<< i << "\n";
		        this_thread::sleep_for(chrono::seconds(1));
	        }
    	}
	
    	else if (unit == "m" || unit == "M")
    	{
    	    for (int i {getTimer()}; i>0; i-=1)
    	    {
		        cout<< i << "\n";
	    	    this_thread::sleep_for(chrono::minutes(1));
    	    }
    	}
	
    	else if (unit == "h" || unit == "H")
    	{
    	    for (int i {getTimer()}; i>0; i-=1)
	        {
    		    cout<< i << "\n";
		        this_thread::sleep_for(chrono::hours(1));
	        }
	    }
	
    	else{
	    	cout<<"Enter a valid unit";
    	}
    	
    	std::cout << "\nDo you wish to continue? (y/n): ";
        std::cin >> again;
    }
    cout<<"Done!!";
}
	

int main()
{
	cout <<"-------Welcome to countdown App-------"<< "\n";
	countdown();
	
	return 0;
}