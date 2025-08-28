CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = anchofijo


all: $(TARGET)

$(TARGET): anchofijo.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

anchofijo.o: anchofijo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
