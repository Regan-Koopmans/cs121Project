CC = g++
CFLAGS = -Wall -Werror -g
LFLAGS = -static -g
TARGET = battlefield
OBJECTS = Unit.o Player.o Soldier.o Thief.o Mage.o Monster.o Elemental.o Goblin.o Ogre.o UnitFactory.o MagicFactory.o PiercingFactory.o BludgeoningFactory.o Team.o ComputerTeam.o SinglePlayer.o Master.o GameMaster.o Map.o DungeonGame.o SinglePlayerGame.o main.o


all: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $(TARGET)

Player.o: Unit.h
main.o: Unit.h Player.h UnitFactory.h MagicFactory.h
MagicFactory.o: UnitFactory.h
PiercingFactory.o: UnitFactory.h
BludgeoningFactory.o: UnitFactory.h
HumanTeam.o: Team.h Team.cpp
ComputerTeam.o: Team.h
SinglePlayer.o: Team.h
Team.o: Unit.h
SinglePlayerGame.o: DungeonGame.h SinglePlayerGame.h

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm *.o
	rm *.exe
	rm $(TARGET)

run:
	./$(TARGET)

map:
	./MapGenerator
