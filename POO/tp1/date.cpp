#include "date.h"
#include <string>

Date::Date(int dia, int mes, int ano) {
  dia = dia;
  mes = mes;
  ano = ano;
}

std::string formatarData(int dia, int mes, int ano) {
  return std::to_string(dia) + "/" + std::to_string(mes) + "/" +
         std::to_string(ano);
}
