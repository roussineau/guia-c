CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = bucles


all: $(TARGET)

$(TARGET): bucles.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

bucles.o: bucles.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean