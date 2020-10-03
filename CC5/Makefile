# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for CC5

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
sorObjs := $(OBJ)/sor.o

SorDLLTest: $(sorObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SorDLLTest $(sorObjs)
	$(EXE)/./SorDLLTest

$(OBJ)/sor.o: $(SRC)/SorDLLTest.cpp $(INC)/SorDLList.h $(INC)/DLList.h
	$(PP) $(CXXFLAGS) -c $(SRC)/SorDLLTest.cpp -o $@


# Command: make creative
priorityObjs := $(OBJ)/priority.o

PQTest: $(priorityObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PQTest $(priorityObjs)
	$(EXE)/./PQTest

$(OBJ)/priority.o: $(SRC)/PQTest.cpp $(INC)/SorDLList.h $(INC)/DLList.h $(INC)/Priority.h $(INC)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@


# Command: make initialize
initialize:
	mkdir $(OBJ) $(EXE)

# Command: make all
all: SorDLLTest PQTest

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*