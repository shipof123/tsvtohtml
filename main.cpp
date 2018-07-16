#include <iostream>
#include <string>
#include <cstdlib>

#include "tsv.h"

std::string dest;
std::string command;

int main(int argc, char ** argv)
{
  if(argc > 2){
    command = "cat index.template.html > ";
    command += argv[2]; 
    system(command.c_str());
    TSV tsv(argv[1],argv[2]);
  } 
  else{
    std::string name;
    getline(std::cin, name);
    getline(std::cin, dest);
    command = "cat index.template.html > ";
    command += dest; 
    system(command.c_str());
    TSV tsv(name, dest);
  }
  return 0;
}