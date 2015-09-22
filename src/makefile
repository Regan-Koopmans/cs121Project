CC = g++
CFLAGS = -Wall -Werror
LFLAGS = -static
TARGET = battefield
OBJECTS = Unit Player Monster Mage Soldier UnitFactory

#dependencies

all: $(OBJECTS)
	$(CC) $(LFLAGS) &(OBJECTS) -o $(TARGET)


clean:
	rm *.o

run:
	./$(TARGET)
