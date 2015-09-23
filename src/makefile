CC = g++
CFLAGS = -Wall -Werror
LFLAGS = -static
TARGET = battefield
OBJECTS = Unit.o Player.o main.o

#dependencies (yet to be added)

all: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o $(TARGET)

Player.o: Unit.h
main.o: Unit.h Player.h

%.o: %.cpp
	$(CC) $< $(CFLAGS) -c -o $@

clean:
	rm *.o

run:
	./$(TARGET)
