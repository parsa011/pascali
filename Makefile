CC := gcc
PROGRAM := pascali
BUILD_PATH := build
CC_FLAGS := -g -Wall
INCLUDES := -I. -I./src

SRCS := $(wildcard src/*.c src/lexer/*.c helpers/*.c)
HEADERS := $(wildcard src/*.h src/lexer/*.h helpers/*.h)

.PHONY : main clear
main : $(SRCS) $(HEADERS)
	$(CC) $(INCLUDES) $(CC_FLAGS) $^ -o $(BUILD_PATH)/$(PROGRAM)

clear:
	rm -rf ./$(BUILD_PATH)/*
