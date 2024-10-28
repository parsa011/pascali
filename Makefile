CC := gcc
PROGRAM := pascali
BUILD_PATH := build
CC_FLAGS := -g -Wall
INCLUDES := -I.

SRCS = $(wildcard src/*.c helpers/*.c)
HEADERS = $(wildcard src/*.h helpers/*.h)

.PHONY : main clear
main : $(SRCS) $(HEADERS)
	$(CC) $(INCLUDES) $(CC_FLAGS) $^ -o $(BUILD_PATH)/$(PROGRAM)

clear:
	rm -rf ./$(BUILD_PATH)/*
