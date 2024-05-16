battleship: main.o game.o board.o humanplayer.o ai.o ship.o coordinate.o
	g++ -o battleship main.o board.o humanplayer.o ai.o ship.o coordinate.o -g

main.o: main.cpp ai.h board.h coordinate.h game.h humanplayer.h player.h ship.h 
	g++ -c main.cpp -g

ai.o: ai.cpp ai.h 
	g++ -c ai.cpp -g 

board.o: board.cpp board.h ship.h
	g++ -c board.cpp -g

coordinate.o: coordinate.cpp coordinate.h 
	g++ -c coordinate.cpp -g

game.o: game.cpp game.h player.h

humanplayer.o: humanplayer.cpp humanplayer.h 
	g++ -c humanplayer.cpp -g

ship.o: ship.cpp ship.h board.h
	g++ -c ship.cpp -g

clean:
	rm* .o battleship