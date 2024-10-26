CXX := gcc

HELPERS_DIR := ./helpers
SRC_DIR := ./src

OBJS := $(wildcard $(HELPERS_SRC)/*.c)
SRCS := $(wildcard $(SRC_DIR)/*.c)

HELPERS := -I$(HELPERS_DIR)

build:
	$(CXX) src/main.c file.o -I$(HELPERS_DIR)
