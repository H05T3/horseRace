# RACE HORSE GAME
### *A GAMBLERS DREAM*

## Overview of the program: This program simulates a horserace of 5 horses, and uses a random number between 1 and 0 to move one step closer to the finish line and stops when there is a winner.

#  List of Functions:
* Constant int called RACELEN, which is the length of the race track
* int main():
	* creates a boolean called KEEPGOING that is set as true to run a while loop until the boolean is set to false
	* creates a int array called horses which stores the placement of each horse
	* while loop that continues until KEEPGOING is false
		* A for loop that goes the length of the horses array, looping through each horse
			* Method advance gets called
			* printLAne method gets called
			* if statement with isWinner method being called to verify if theres a winner and changes KEEPGOING to false if there is

		* A if statement that takes in KEEPGOING as a parameter and asks the user to quit the game or keep going.
* void advance(takes an int of the horse number,takes a pointer of the horses array)
	* creates a variable of a random int from 0-1 and adds that number to the horse that is being advanced
* void printLane(takes an int of the horse number, takes a pointer of the horses array)
	* for loop from  0 to the race length
		* if statement that finds the horses postion and prints the horse's number, if not print a dot in its place to draw the race track
* void isWinner (takes an int of the horse number, takes a pointer of the horses array)
	* booolean caled winner that is set to false automatically
	* if statement that asks for the horses's position and if is equal to the end of the race track then it turns the boolean winner to ture and prints out "horse, horsenum, won the race!" and returns it back to where it is called.
