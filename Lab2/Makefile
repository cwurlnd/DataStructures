# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for Lab2

# GCC compiler for C++
PP := g++

# Flags used 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make vector
vectorObjs := $(OBJ)/vector.o

vector: $(vectorObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/vector $(vectorObjs)
	$(EXE)/./vector

$(OBJ)/vector.o: $(SRC)/Lab2.cpp $(INC)/functions.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab2.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: vector

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
