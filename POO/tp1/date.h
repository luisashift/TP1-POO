#ifndef DATE_H
#define DATE_H
#include <cstdlib>
#include <string>

class Date {
private:
  int dia;
  int mes;
  int ano;

public:
  Date(int dia, int mes, int ano);
  std::string formatarData();
};

#endif
