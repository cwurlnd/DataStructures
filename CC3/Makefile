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

# Command: make fundamental
linearObjs := $(OBJ)/double.o

fundamental: $(linearObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/fundamental $(linearObjs)
	$(EXE)/./fundamental

$(OBJ)/double.o: $(SRC)/Fundamental.cpp $(INC)/DoubleHash.h $(INC)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Fundamental.cpp -o $@


# Command: make creative
creativeObjs := $(OBJ)/creative.o

creative: $(creativeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/creative $(creativeObjs)
	$(EXE)/./creative

$(OBJ)/creative.o: $(SRC)/Creative.cpp $(INC)/DoubleHash.h $(INC)/LinearProbe.h $(INC)/Creative.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Creative.cpp -o $@


# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: fundamental creative

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
