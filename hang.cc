#include <iostream>
#include <cstdlib>

#include "hang.h"

using namespace std;

string gallows1 = " --------\n   |    |";
string gallows2 = "   |    ";
string gallows3 = "\n   |   ";
string gallows4 = "\n   |    ";
string gallows5 = "\n   |   ";
string gallows6 = "\n   |\n   |\n___|____\n";

void drawhangman(int wrong) {
	const char Sp = ' ';
	char a = Sp;
	char b = Sp;
	char c = Sp;
	char d = Sp;
	char e = Sp;
	char f = Sp;
	char g = Sp;
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
	}
        cout << gallows1 << endl << gallows2 << a << gallows3 << b << c << d << gallows4 << e << gallows5 << f << " " << g << gallows6 << endl;
}
	
