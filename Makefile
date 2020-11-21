
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra


all:
	$(CXX) $(CXXFLAGS) -Iinclude src/logger.cpp tests/main.cpp -o bin/logger_tests
	./bin/logger_tests
