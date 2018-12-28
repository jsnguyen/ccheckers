INCLUDEDIR=include
SRCDIR=src
BUILDDIR=build

LIBS=-lm
CC=gcc
CFLAGS=-g -Wall -I$(INCLUDEDIR)

EXECUTABLE=cchess.exe 

default: $(EXECUTABLE)
all: default

SOURCES=cchess.c piece.c board.c moves.c
OBJECTS=$(SOURCES:%.c=$(BUILDDIR)/%.o)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -Wall $(LIBS) -o $@

.PHONY: default all clean

clean:
	-rm -f $(OBJECTS)
	-rm -f $(EXECUTABLE)
