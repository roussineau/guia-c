CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamaño


all: $(TARGET)

$(TARGET): tamaño.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

tamaño.o: tamaño.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
