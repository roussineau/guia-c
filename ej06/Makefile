CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = mensaje


all: $(TARGET)

$(TARGET): mensaje.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

mensaje.o: mensaje.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean