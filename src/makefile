CC = g++
CFLAGS = -Wall -Werror
LFLAGS = -static
TARGET = battlefield
OBJECTS = Unit.o Player.o Soldier.o Thief.o Mage.o Monster.o Elemental.o Goblin.o Ogre.o UnitFactory.o MagicFactory.o PiercingFactory.o BludgeoningFactory.o Team.o HumanTeam.o GameMaster.o Map.o main.o

#dependencies (yet to be added)

all: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $(TARGET)

Player.o: Unit.h
main.o: Unit.h Player.h UnitFactory.h MagicFactory.h
MagicFactory.o: UnitFactory.h
PiercingFactory.o: UnitFactory.h
BludgeoningFactory.o: UnitFactory.h
HumanTeam.o: Team.h Team.cpp
ComputerTeam.o: Team.h

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm *.o
	rm *.exe

run:
	./$(TARGET)
