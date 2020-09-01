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

# Command: make Lab3
anagramObjs := $(OBJ)/anagram.o

Lab3: $(anagramObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Lab3 $(anagramObjs)
	$(EXE)/./Lab3

$(OBJ)/anagram.o: $(SRC)/Lab3.cpp $(INC)/Anagram.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab3.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: Lab3

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
