CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = dados


all: $(TARGET)

$(TARGET): dados.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

dados.o: dados.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean