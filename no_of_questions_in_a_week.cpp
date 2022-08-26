//ques-- To check the number of question solv in a week if its less than 10 dount count
#include <iostream>
using namespace std;

int main() {
    int no_of_weeks[4];
    int no_of_questions,week,s=0;
	for(week=0;week<4;week++){
	    cout<<"Number of question on week "<<week+1<<"=";
	    cin>>no_of_weeks[week];
        if(no_of_weeks[week]>=10){
	        s=s+1;
	    }
	}
	cout<<s;
	return 0;
}
