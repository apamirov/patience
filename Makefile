# Makefile for patience project

patience: patience.o deckCard.o
	g++ -o patience patience.o deckCard.o

patience.o: patience.cpp
	g++ -c patience.cpp

deckCard.o: deckCard.cpp
	g++ -c deckCard.cpp

clean:
	rm -f *.o deckCard
