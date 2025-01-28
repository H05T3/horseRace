#include <cstdlib>
#include <ctime>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);


int main(){
	const int RACELEN = 10;
	bool KEEPGOING = true;
	int[] horses = {0,0,0,0,0};
	while(KEEPGOING){
		for(int i = 0; i<5; i++){
			advance(i,horses);
			printLane(i,horses);
			if(isWinner(i, horses)){
				KEEPGOING = false;
			}
		}
	}
	return 0;
}

void advance(int horseNum, int* horses){
	srand(time(NULL));
	coin = rand() % 1;
	horses[horseNum]+=coin;
}
void printLane(int horseNum, int* horses){
	i = 0;
	for(i; i<RACELEN; i++){
		if(horses[horseNum] == i){
			std::cout << i <<std::endl;
		} else {
			std::cout << "." << std::endl;
		}
	}
}
bool isWinner(int horseNum, int* horses){
	bool winner = false;
	if(horses[horseNum] == RACELEN-1){
		winner = true;
		std::cout << "Horse " << horseNum << " won the race!!!!!!" << std::endl;
	}
	return winner;
}
