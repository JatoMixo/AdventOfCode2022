#include <iostream>
#include <cmath>
#include <stdexcept>

/*int SnafuToDecimal(std::string snafu){

  int result = 0;

  for (int i = snafu.length() - 1; i >= 0; i--){

    if (snafu[i] == '='){
      result += (-2) * pow(5, i);
      continue;
    } else if (snafu[i] == '-'){
      result += (-1) * pow(5, i);
      continue;
    }

    if ((int)(snafu[i] - 48) > 2 || (int)(snafu[i] - 48) < 0) throw new std::invalid_argument("Invalid term.");
    result += ((int)(snafu[i] - 48)) * pow(5, i);
    std::cout << i << ": " << result << "\n";
  }

  return result;
}*/

std::string DecimalToSnafu(int decimal){

  std::string result;

  return result;
}