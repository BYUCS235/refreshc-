all: strings refresh 

refresh: refresh.cpp
	g++ -std=c++11 refresh.cpp -o refresh
	
strings: strings.cpp
	g++ -std=c++11 strings.cpp -o strings
