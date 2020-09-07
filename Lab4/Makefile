# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for Lab3

# GCC compiler for C++
PP := g++

# Flags used 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make Lab4
mergeObjs := $(OBJ)/merge.o

Lab4: $(mergeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab4 $(mergeObjs)
	$(EXE)/./Lab4

$(OBJ)/merge.o: $(SRC)/Lab4.cpp $(INC)/MergeInt.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab4.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: Lab4

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
