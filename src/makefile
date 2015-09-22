CC = g++
CFLAGS = -Wall -Werror
LFLAGS = -static
TARGET = battefield
OBJECTS = Unit Player Monster Mage Soldier UnitFactory

#dependencies (yet to be added)

%.o: %.cpp
	%(CC) $< $(CFLAGS) -c -o $@

all: $(OBJECTS)
	$(CC) $(LFLAGS) &(OBJECTS) -o $(TARGET)


clean:
	rm *.o

run:
	./$(TARGET)
