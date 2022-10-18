#ifndef HELPER_FUNCTION_H
#define HELPER_FUNCTION_H

#include <string>
#include <iostream>

std::string readInfoFromFileLineM2N(const std::string &filename, int begin, int end);

template <class T>
// 默认参数不能在声明和定义中同时出现，所以最好在声明中出现。
T CheckInputRange(T input, T min = std::numeric_limits<T>::min(), std::string errorMsg = "输入超出规定范围",
                  T max = std::numeric_limits<T>::max());

int CheckIfNum(std::string input);

std::string StringInputInformationHelper(const std::string &requestInfo);

double DoubleInputInformationHelper(const std::string &requestInfo, double min = std::numeric_limits<double>::min(),
                                    const std::string &errorMsg = "信息输入超出规定范围",
                                    double max = std::numeric_limits<double>::max());

std::string GenRandom(const int len);

void FormatDivision(const std::string &info, const char divisionChar, const int numOfDivChar);

void fileEmpty(const std::string& fileName);

#endif