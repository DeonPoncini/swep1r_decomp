.PHONY=all clean

# compiler settings
ifeq ($(OS), Windows_NT)
	CC = i686-w64-mingw32-gcc
else
	CC = gcc
endif
CFLAGS = -m32 -g -Wall -Iinclude -Iplatform

# input directories
BUILD_DIR = build
GAME_DIR = src
PLATFORM_DIR = platform

# sources
GAME_SRC = $(wildcard $(GAME_DIR)/*.c)
PLATFORM_SRC = $(wildcard $(PLATFORM_DIR)/*.c)

# objects
GAME_OBJS = $(patsubst $(GAME_DIR)/%.c,$(BUILD_DIR)/%.o,$(GAME_SRC))
PLATFORM_OBJS = $(patsubst $(PLATFORM_DIR)/%.c,$(BUILD_DIR)/%.o,$(PLATFORM_SRC))

EXECUTABLE = swep1r
all: $(BUILD_DIR)/$(EXECUTABLE)

$(BUILD_DIR)/$(EXECUTABLE): $(GAME_OBJS) $(PLATFORM_OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

$(GAME_OBJS): $(BUILD_DIR)/%.o: $(GAME_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(PLATFORM_OBJS): $(BUILD_DIR)/%.o: $(PLATFORM_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/$(EXECUTABLE)
