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

# Command: make anagram
anagramObjs := $(OBJ)/anagram.o

anagram: $(anagramObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/anagram $(anagramObjs)
	$(EXE)/./anagram

$(OBJ)/anagram.o: $(SRC)/Lab3.cpp $(INC)/Anagram.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Lab3.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: anagram

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
