CXXFLAGS = -Wall -g
CXX = g++

all: build run clean

build:
	$(CXX) $(CXXFLAGS) -o heap.o MinHeap.cpp main.cpp
	
run:
	./heap.o

clean: 
	rm -rf heap.o 