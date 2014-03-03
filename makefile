#makefile

all: hangman

hangman: hangman.o hang.o
	g++ hangman.o hang.o -o hangman
	
hangman.o: hang.h

hang.o: hang.h

clean:
	rm -f hangman.o hang.o hangman

install: hangman
	cp hangman ~/bin
