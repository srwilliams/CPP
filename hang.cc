#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "hang.h"
using namespace std;

string gallows1 = " --------\n   |    |";
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
int wrong = 0;

void drawhangman(int wrong) {
		if (wrong ==1) {
			a='0';
		}
		else if (wrong ==2) {
			a='0';
			b='/';

        }
        else if (wrong ==3) {

            a='0';
            b='/';
            c='|';
        }
        else if (wrong ==4) {

            a='0';
            b='/';
            c='|';
            d='\\';
        }
        else if (wrong ==5) {

            a='0';
            b='/';
            c='|';
            d='\\';
            e='|';
         }
        else if (wrong ==6) {

            a='0';
            b='/';
            c='|';
            d='\\';
            e='|';
            f='/';
        }
        else if (wrong ==7) {

            a='0';
            b='/';
            c='|';
            d='\\';
            e='|';
            f='/';
            g='\\';
        }
        else {
            const char Sp = ' ';
			char a = Sp;
			char b = Sp;
			char c = Sp;
			char d = Sp;
			char e = Sp;
			char f = Sp;
			char g = Sp; 
        }
        cout << gallows1 << endl << gallows2 << a << gallows3 << b << c << d << gallows4 << e << gallows5 << f << " " << g << gallows6 << endl;
}

string* loadwords() {
		string* pointer;
		string wordslist[11]; // creates array to hold names
		pointer = wordslist;
		int loop=0; //short for loop for input
		string line; //this will contain the data read from the file
		ifstream myfile ("words1.txt"); //opening the file.
		if (myfile.is_open()) //if the file is open
		{
		    while (! myfile.eof() ) //while the end of file is NOT reached
		    {
		        getline (myfile,line); //get one line from the file
		        wordslist[loop] = line;
		        loop++;
		    }
		    myfile.close(); //closing the file
		}
		else cout << "Unable to open file"; //if the file is not open output
	return pointer;
}


string genword(string* pointer) {
	srand(static_cast<unsigned int>(time(NULL)));
	int num = abs(rand()) % (1509 +1);
	string secretword;
	*(pointer + num) = secretword;
	cout<< secretword <<endl;
	return secretword;
}
