CC = gcc
CFLAGS = -g -Wall
CXX = g++

DECOMPILED_SRC = decompiled
BUILDDIR = build

.PHONY=all clean dir

EXECUTABLE = swep1r
SOURCES = $(wildcard $(DECOMPILED_SRC)/*.c)
OBJECTS = $(patsubst $(DECOMPILED_SRC)/%.c,$(BUILDDIR)/%.o,$(SOURCES))

all: dir $(BUILDDIR)/$(EXECUTABLE)

dir:
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/$(EXECUTABLE): $(OBJECTS)
	$(CXX) $^ -o $@

$(OBJECTS): $(BUILDDIR)/%.o : $(DECOMPILED_SRC)/*.c
	$(CXX) $(FLAGS) $< -o $@

clean:
	rm -f $(BUILDDIR)/*.o $(BUILDDIR)/$(EXECUTABLE)
