#!/bin/bash
CC = gcc
CFLAGS = -Wall -I./src/setup -I./src/win98_core -I./src/sectool_plus1
SRC = src/main.c src/setup/auto_setup.c src/win98_core/os_init.c src/sectool_plus1/sectool.c
OBJ = $(SRC:.c=.o)
TARGET = win98_sectool_setup

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
