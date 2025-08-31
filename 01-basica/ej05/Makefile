CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = conversiones


all: $(TARGET)

$(TARGET): conversiones.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

conversiones.o: conversiones.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
