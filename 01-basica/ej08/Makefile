CC = gcc
CFLAGS = -Wall -Wextra -pedantic -g
TARGET = diferencia


all: $(TARGET)

$(TARGET): diferencia.o
	$(CC) $(CFLAGS) $^ -o $(TARGET)

diferencia.o: diferencia.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean