# Makefile

FLAGS = -pedantic-errors -std=c++11

classpsyco.o: classpsyco.cpp classpsyco.h
	g++ $(FLAGS) -c classpsyco.cpp

dragon.o: dragon.cpp dragon.h
	g++ $(FLAGS) -c dragon.cpp

potion.o: potion.cpp potion.h
	g++ $(FLAGS) -c potion.cpp

spell.o: spell.cpp spell.h
	g++ $(FLAGS) -c spell.cpp

tripgambler.o: tripgambler.cpp tripgambler.h
	g++ $(FLAGS) -c tripgambler.cpp

welcome_main.o: welcome_main.cpp classpsyco.h dragon.h potion.h spell.h tripgambler.h
	g++ $(FLAGS) -c $<

welcome_main: welcome_main.o tripgambler.o spell.o potion.o dragon.o classpsyco.o
	g++ $(FLAGS) $^ -o $@

clean:
	rm -f *.o welcome_main

.PHONY: clean
