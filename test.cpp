#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string cardNames[] = {"","A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int cardScores[] = {0,1,2,3,4,5,6,7,8,9,10,10,10,10};

int drawCard(void){
	//Write the function to random the number from 1 to 13 and return that random number.
	
    int rannum = rand()%13+1;
	return rannum;

}
int findYugiAction(int s){	
	if(s == 9) return 2; // Yugi will definitely stay (2) when current score (s) is equal to 9
	else if(s < 6) return 1; // Yugi will definitely draw (1) when current score (s) is less than 6
	else{
		// If current score is 6,7,8, Yugi will draw with probability 69% and will stay with probability 31% 
		// Write conditions here using random number 
		int yukiact=rand()%100+1;
        if (yukiact<=69)
            {return 1;}
        else {return 2;}
	}
}


int main(){

    cout<<findYugiAction(8);
}