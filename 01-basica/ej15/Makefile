CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = factorial


all: $(TARGET)

$(TARGET): factorial.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

factorial.o: factorial.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean