//hangman game

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "hang.h"
#include <vector>
using namespace std;

int main () {


vector<string> words;
int loop=0; //short for loop for input
string line; //this will contain the data read from the file
ifstream myfile ("words.txt");
while(getline(myfile, line)) {
	words.push_back(line);
}


//test for input
/*for (unsigned int i=0; i<words.size(); ++i) {
	cout<<words[i]<<endl;
}*/


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
        
return 0;
}

