#include <vector>

#ifndef TSV_H_
#define TSV_H_

class TSV
{
private:
  std::vector<std::string> lines;
  std::string first;
  std::vector<std::vector<std::string> > records; 
  std::string file;
  std::string dest;
public:
  TSV(std::string fname, std::string dst)
  {
    file = fname;
    dest = dst;
    read();
    print();
    format();
  }
  void read();
  void print();
  void sort(std::string content);
  void format();
};
#endif