CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = shadowing


all: $(TARGET)

$(TARGET): shadowing.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

shadowing.o: shadowing.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean