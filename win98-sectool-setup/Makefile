CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -Isrc
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# Source files
SOURCES = $(SRCDIR)/main.c \
          $(SRCDIR)/win98_core/os_init.c \
          $(SRCDIR)/setup/auto_setup.c \
          $(SRCDIR)/sectool_plus1/sectool.c

# Object files
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Target executable
TARGET = $(BINDIR)/win98-sectool

.PHONY: all clean directories

all: directories $(TARGET)

directories:
	@mkdir -p $(OBJDIR)/win98_core $(OBJDIR)/setup $(OBJDIR)/sectool_plus1 $(BINDIR)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@
	@echo "Build complete: $(TARGET)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)
	@echo "Clean complete"

install: $(TARGET)
	cp $(TARGET) /usr/local/bin/
	@echo "Installation complete"

.PHONY: run
run: $(TARGET)
	./$(TARGET)
