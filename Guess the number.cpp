#include<iostream>
#include<ctime>
#include<cstdlib>
int main(){ 
	std::cout<<"****************NUMBER GUESSING GAME 2.0*****************\n\n";
	int guess, n, i;
	std::cout<<"You have 7 trials to guess the number !!\n";
	std::cout<<"Best of LUCK !!\n";
	srand(time(NULL));
	n = rand() % 100 + 1;
	
	for(i = 1; i <= 7; i++){
		std::cout<<"Enter your guess number (1-100): \n";
		std::cin >> guess;
		
		if(guess == n){
			std::cout << "Congratulations! You guessed the correct number!\n";
			break;
		}
		else if(guess > n){
			std::cout << "Too high! Try again.\n\a";	
		}
		else {
			std::cout << "Too low! Try again.\n\a";
		}
		
		if(i == 7 && guess != n){
			std::cout << "GAME OVER !! BETTER LUCK NEXT TIME!\n";
			std::cout << "The correct number was: " << n << "\n";
			std::cout << "*********************************************************\n\n";		
		}
	}
	return 0;
}
