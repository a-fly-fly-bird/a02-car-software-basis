#ifndef HELPER_FUNCTION_H
#define HELPER_FUNCTION_H

#include <string>
#include <iostream>

template <class T>
T &CheckInputRange(T input, const T &min, const std::string &errorMsg, const T &max);

int CheckIfNum(std::string input);

std::string StringInputInformationHelper(const std::string &requestInfo);

double DoubleInputInformationHelper(const std::string &requestInfo, const double min, const std::string &errorMsg, const double max);

std::string GenRandom(const int len);

void FormatDivision(const std::string &info, const char divisionChar, const int numOfDivChar);

#endif