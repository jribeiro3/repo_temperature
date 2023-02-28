CC = g++
CXXFLAGS = -Wall -ggdb -pthread

LDFLAGS = -pthread -lm

TARGET = dailytemp main

all:	$(TARGET)

$(TARGET):	dailytemp.o main.o
		gcc -o $@ $^ $(LDFLAGS)

$(TARGET): dailytemp.h

clean:
		rm -f *.o *~

cleanall:	clean
		rm -f $(TARGET)

