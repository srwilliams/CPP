//hangman game

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "hang.h"
using namespace std;

/*string gallows1 = " --------\n   |    |";
string gallows2 = "   |    ";
string gallows3 = "\n   |   ";
string gallows4 = "\n   |    ";
string gallows5 = "\n   |   ";
string gallows6 = "\n   |\n   |\n___|____\n";


const char Sp = ' ';
char a = Sp;
char b = Sp;
char c = Sp;
char d = Sp;
char e = Sp;
char f = Sp;
char g = Sp;
int wrong = 0;*/

int main () {


cout<< "\n\t\tWelcome to Hangman!\n";
//cout << gallows1 << endl << gallows2 << "0" << "/" << gallows3 << "/" << "|" << gallows4 << "|" << gallows5 << "/" << " " << "\\" << gallows6 << endl;
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

