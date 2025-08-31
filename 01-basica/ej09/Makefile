CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = comparar


all: $(TARGET)

$(TARGET): comparar.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

comparar.o: comparar.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean