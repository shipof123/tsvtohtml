all: 
	g++ -std=c++11 main.cpp tsv.cpp -o reader
reset: index.html.template
	cat index.html.template > index.html
