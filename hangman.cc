//hangman game

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype>

#include "hang.h"

using namespace std;

int main () {

const int MAXWRONG = 7;

//////////////////// Choosing a word/////////////////////////

/* Creating word list */
vector<string> words;
string line;
ifstream myfile ("words.txt");
while(getline(myfile, line)) {
	words.push_back(line);
}


/* test for file input */
/*for (unsigned int i=0; i<words.size(); ++i) {
	cout<<words[i]<<endl;
}*/


cout<<endl
<<" --------"<<"\t\t\tWelcome to hangman!"<<endl
<<"   |    |"<<endl
<<"   |    0/"<<endl
<<"   |   /|"<<endl
<<"   |    |"<<endl
<<"   |   / \\"<<endl
<<"   |    "<<endl
<<"   |    "<<endl
<<"___|____"<<endl;

while (true) { //Start the "Play again?" loop


	/* Generating random word */
	srand(static_cast<unsigned int>(time(NULL)));
	random_shuffle (words.begin(), words.end() );
	string THEWORD =words[0];

	////////////////// Setting up the game ///////////////////////
	string SOFAR(THEWORD.size(), '-');
	string used = "";
	int wrong = 0;
	char guess;
	char play;

	////////////////// Playing the game //////////////////////////




	while ((wrong<MAXWRONG) && (SOFAR != THEWORD)) {

		drawhangman(wrong); //Print out an updated hangman
		cout<<"So far, you've gotten: "<<SOFAR<<endl; //Print out how much of the word the player has guessed
		cout<<"You've guessed: "<<used<<endl;
		cout<<"You have "<<(MAXWRONG-wrong)<<" wrong guesses left\n";
		cout << "\nEnter your guess (only one lowercase letter please): ";
		cin >> guess;

		while (used.find(guess) != string::npos) { //If the letter has been guessed by the player before
			cout<<"You have already guessed '"<<guess<<"'.  Try again"<<endl;
			cout<<"Enter your guess (only one lowercase letter please): "; //Guess again
			cin>>guess;
		}

		used +=guess; //Add the letter the player has guessed to the list of 'used' letters

		if (THEWORD.find(guess) != string::npos) {
			cout<< "Good! The letter "<<guess<<" is in the word.\n";
			for (int i = 0; i<THEWORD.length(); ++i) { //insert the guess into the string SOFAR if it's found in THEWORD
				if (THEWORD[i] == guess) {
					SOFAR[i] = guess;
				}
			}
		}
		else {
			cout<< "\n\nSorry, '"<<guess<<"' isn't in the word.\n";
			++wrong;
		}
	}

	if (wrong == MAXWRONG) {
		drawhangman(MAXWRONG);
		cout<<"You lose!"<<endl;
	}
	else {
		cout<<"\n\nYou got it!"<<endl;
	}

	cout<<"The word was: "<<THEWORD<<".\n"<<endl;

	cout << "Play again? (y/n) : ";
	cin >> play;
	if (play == 'n') {
		break;
	}
	else if (play != 'y') {
		cout<<"I didn't understand you. Bye-bye!";
	}
}

return 0;
}

