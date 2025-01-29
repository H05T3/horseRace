#include <cstdlib>
#include <ctime>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
const int RACELEN = 10;

int main(){
	srand(time(NULL));
	bool KEEPGOING = true;
	int horses[] = {0,0,0,0,0};
	while(KEEPGOING){
		for(int i = 0; i<5; i++){
			advance(i,horses);
			printLane(i,horses);
			if(isWinner(i, horses)){
				KEEPGOING = false;
			}
		}
		if(KEEPGOING){
			std::string userInput;
			std::cout << "Press q to quit, or any key and enter to continue: ";
			std::cin >> userInput;
			if(userInput == "q"){
				std::cout << "Quitting the game" << std::endl;
				KEEPGOING = false;
			}
		}
	}
	return 0;
}

void advance(int horseNum, int* horses){

	int coin = rand() % 2;
	horses[horseNum]+=coin;
}
void printLane(int horseNum, int* horses){
	for(int i = 0; i<RACELEN; i++){
		if(horses[horseNum] == i){
			std::cout << horseNum;
		} else {
			std::cout << ".";
		}
	}
	std::cout<<std::endl;
}
bool isWinner(int horseNum, int* horses){
	bool winner = false;
	if(horses[horseNum] >= RACELEN-1){
		winner = true;
		std::cout << "Horse " << horseNum << " won the race!!!!!!" << std::endl;
	}
	return winner;
}
