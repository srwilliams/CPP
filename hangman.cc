//hangman game

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "hang.h"
#include <vector>
#include <algorithm>
#include <cctype>
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

/* Generating random word */
srand(static_cast<unsigned int>(time(NULL)));
random_shuffle (words.begin(), words.end() );
cout<< words[0] << endl;
string THEWORD = toupper(words[0]);
cout<< THEWORD<<endl;

////////////////// Setting up the game ///////////////////////
string SOFAR(THEWORD.size(), '-');
string used = "";


cout<< "\n\t\tWelcome to Hangman!\n";

//Test Hangman
cout<<endl
<<" --------"<<endl
<<"   |    |"<<endl
<<"   |    0/"<<endl
<<"   |   /|"<<endl
<<"   |    |"<<endl
<<"   |   / \\"<<endl
<<"   |    "<<endl
<<"   |    "<<endl
<<"___|____"<<endl;

int wrong = 7;
drawhangman(wrong);
getplayerguess();
return 0;
}

