CC = gcc
CFLAGS = -Wall -I./src/setup -I./src/win98_core -I./src/sectool_plus1
SRC = src/main.c src/setup/auto_setup.c src/win98_core/os_init.c src/sectool_plus1/sectool.c
OBJ = $(SRC:.c=.o)
TARGET = win98_sectool_setup

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

TEST_SRC = ../test_main.c
TEST_BIN = test_main

test: $(TEST_BIN)
	./$(TEST_BIN)

$(TEST_BIN): $(TEST_SRC) src/win98_core/os_init.c src/setup/auto_setup.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
	rm -f $(OBJ) $(TARGET)
