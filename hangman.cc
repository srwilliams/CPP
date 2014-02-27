//hangman game

#include <iostream>
using namespace std;

void drawhangman();
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

int main () {

cout<< "\n\t\tWelcome to Hangman!\n";
cout << gallows1 << endl << gallows2 << "0" << "/" << gallows3 << "/" << "|" << gallows4 << "|" << gallows5 << "/" << " " << "\\" << gallows6 << endl;
/* Test Hangman
cout<<endl
<<" --------"<<endl
<<"   |    |"<<endl
<<"   |    0"<<endl
<<"   |   /|\\"<<endl
<<"   |    |"<<endl
<<"   |   / \\"<<endl
<<"   |    "<<endl
<<"   |    "<<endl
<<"___|____"<<endl;*/

        do {
        wrong +=1;


        if (wrong ==0) {

                drawhangman();

                }
        else if (wrong ==1) {

                a='0';
                drawhangman();

                }
        else if (wrong ==2) {

                a='0';
                b='/';
                drawhangman();

                }
        else if (wrong ==3) {

                a='0';
                b='/';
                c='|';
                drawhangman();

                }
        else if (wrong ==4) {

                a='0';
                b='/';
                c='|';
                d='\\';
                drawhangman();

                }
        else if (wrong ==5) {

                a='0';
                b='/';
                c='|';
                d='\\';
                e='|';
                drawhangman();

                }
        else if (wrong ==6) {

                a='0';
                b='/';
                c='|';
                d='\\';
                e='|';
                f='/';
                drawhangman();

                }
        else if (wrong ==7) {

                a='0';
                b='/';
                c='|';
                d='\\';
                e='|';
                f='/';
                g='\\';
                drawhangman();

                }
        else {
                break;
                }

        } while (wrong <=7);

return 0;
}

void drawhangman() {
        cout << gallows1 << endl << gallows2 << a << gallows3 << b << c << d << gallows4 << e << gallows5 << f << " " << g << gallows6 << endl;
}
