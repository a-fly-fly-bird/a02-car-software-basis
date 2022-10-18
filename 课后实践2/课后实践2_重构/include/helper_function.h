#ifndef HELPER_FUNCTION_H
#define HELPER_FUNCTION_H

#include <string>
#include <iostream>
#include <unistd.h>

std::string readInfoFromFileLineM2N(const std::string &filename, int begin, int end);

// double DoubleInputInformationHelper(std::string requestInfo, double min = std::numeric_limits<double>::min(),
//                                     std::string errorMsg = "信息输入超出规定范围",
//                                     double max = std::numeric_limits<double>::max());

double DoubleInputInformationHelper(std::string requestInfo, double min = 0, std::string errorMsg = "信息输入超出规定范围", double max = 100);

// 默认参数不能在声明和定义中同时出现，所以最好在声明中出现。
// T CheckInputRange(T input, T min = std::numeric_limits<T>::min(), std::string errorMsg = "输入超出规定范围",
//                   T max = std::numeric_limits<T>::max());
// template <class T>
// T CheckInputRange(T input, T min = 0, std::string errorMsg = "输入超出规定范围",
//                   T max = 100000);

int CheckInputRange(int input, int min = 0, std::string errorMsg = "输入超出规定范围",
                  int max = 100000);

double CheckInputRange(double input, double min = 0, std::string errorMsg = "输入超出规定范围",
                    double max = 100000);

int CheckIfNum(std::string input);

std::string StringInputInformationHelper(const std::string &requestInfo);

std::string GenRandom(const int len);

void FormatDivision(const std::string &info, const char divisionChar, const int numOfDivChar);

void fileEmpty(const std::string &fileName);

#endif