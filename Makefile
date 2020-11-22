
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra


all: demo

demo:
	$(CXX) $(CXXFLAGS) -Iinclude -Idemos src/logger.cpp demos/main.cpp demos/coffee.cpp -o bin/demo
	./bin/demo

tests:
	$(CXX) $(CXXFLAGS) -Iinclude src/logger.cpp tests/main.cpp -o bin/logger_tests
