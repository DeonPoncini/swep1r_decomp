.PHONY=all

# compiler settings
CC = gcc
CFLAGS = -g -Wall -Iinclude -Iplatform
CXX = g++

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
