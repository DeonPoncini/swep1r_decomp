CC = gcc
CFLAGS = -g -Wall
CXX = g++

DECOMPILED_SRC = decompiled
BUILDDIR = build

.PHONY=all

EXECUTABLE = swep1r
SOURCES = $(wildcard $(DECOMPILED_SRC)/*.c)
OBJECTS = $(patsubst $(DECOMPILED_SRC)/%.c,$(BUILDDIR)/%.o,$(SOURCES))

all: $(BUILDDIR)/$(EXECUTABLE)

$(BUILDDIR)/$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CFLAGS) $^ -o $@

$(OBJECTS): $(BUILDDIR)/%.o: $(DECOMPILED_SRC)/*.c
	$(CXX) $(CFLAGS) $< -o $@ -c

