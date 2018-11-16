all: 
	g++ -std=c++11 test.cpp sv.cpp -o reader
reset: index.html.template
	cat index.html.template > index.html
