CC = g++
CXXFLAGS = -w -std=c++14

EXEC = SocketWrapper
OBJECTS = $(SOURCES:.cpp=.o)
SOURCES = $(wildcard src/*.cpp)

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -pthread -o $(EXEC)

%.o: %.cpp %.hpp
	$(CC) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f $(EXEC) $(OBJECTS)
