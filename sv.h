#include <vector>

#ifndef TSV_H_
#define TSV_H_

template <char _delim>
class SV
{
private:
  char delim = _delim;
  std::vector<std::string> lines;
  std::string first;
  std::vector<std::vector<std::string> > records; 
  std::string file;
  std::string dest;
public:
  SV(std::string fname, std::string dst)
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
