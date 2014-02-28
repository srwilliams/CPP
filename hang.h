//hangman header file
//functions and shit
//hang.h

#ifndef HANG_H
#define HANG_H
#include <vector>
using namespace std;

void drawhangman(int wrong);
string genword(vector<string> words);
string getplayerguess();
//void playgame(string);

#endif
