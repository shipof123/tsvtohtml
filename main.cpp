#include <iostream>
#include <string>
#include <cstdlib>

#include "tsv.h"

int main(int argc, char ** argv)
{
  if(argc > 2){
    TSV tsv(argv[1],argv[2]);
  } 
  else {
    std::string dest;
    std::string name;
    getline(std::cin, name);
    getline(std::cin, dest);
    TSV tsv(name, dest);
  }
  return 0;
}
