CXXFLAGS = -Wall -g
CXX = g++

all: heap run

heap:
	(CXX) $(CXXFLAGS) -o $@ MinHeap.cpp main.cpp

run: heap
	./heap
