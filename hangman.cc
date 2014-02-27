//hangman game

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "hang.h"
using namespace std;

int main () {


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

