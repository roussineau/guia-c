CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = feliz


all: $(TARGET)

$(TARGET): feliz.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

feliz.o: feliz.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean