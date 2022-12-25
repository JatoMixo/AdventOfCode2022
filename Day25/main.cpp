#include <iostream>
#include <cmath>
#include <stdexcept>

int SnafuToDecimal(std::string snafu){

  int result = 0;

  for (int i = sizeof(snafu)/sizeof(snafu[0]) - 1; i >= 0; i++){
    char chr = snafu[i];

    if (chr == '='){
      result += -pow(2, 5 * i);
      break;
    } else if (chr == '-'){
      result += -pow(1, 5 * i);
      break;
    }

    if ((int)(chr - 48) > 2 || (int)(chr - 48) < 0)
    result += pow((int)(chr - 48), 5);
  }

  return result;
}

std::string DecimalToSnafu(int decimal){

  std::string result;

  return result;
}