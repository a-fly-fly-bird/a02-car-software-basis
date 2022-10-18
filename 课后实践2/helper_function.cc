#include <iostream>
#include "helper_function.h"
using namespace std;

// 检查数字是否超出范围
template <class T>
T &CheckInputRange(T input, const T &min, const std::string &errorMsg, const T &max)
{
    if (input > max || input < min)
    {
        cout << errorMsg;
        cin >> input;
        input = checkInputRange(input, min, errorMsg, max);
    }
    return input;
}

int CheckIfNum(std::string input)
{
    int res;
    try
    {
        res = stoi(input);
    }
    catch (exception e)
    {
        cout << "输入的不是数字,请重新输入: ";
        cin >> input;
        res = CheckIfNum(input);
    }
    return res;
}

std::string StringInputInformationHelper(const std::string &requestInfo)
{
    cout << "请输入" << requestInfo << "信息：";
    string info;
    cin >> info;
    return info;
}

double DoubleInputInformationHelper(const std::string &requestInfo, const double min, const std::string &errorMsg, const double max)
{
    cout << "请输入" << requestInfo << "信息：";
    string info;
    double res;
    cin >> info;
    // check if double
    try
    {
        res = stod(info);
    }
    catch (const exception &)
    {
        cout << "输入的不是数字，请重新输入。" << endl;
        res = DoubleInputInformationHelper(requestInfo, min, errorMsg, max);
    }
    res = CheckInputRange(res, min, errorMsg, max);
    return res;
}

std::string GenRandom(const int len)
{
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i)
    {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

void FormatDivision(const std::string &info, const char divisionChar, const int numOfDivChar)
{
    int len = info.length();
    int halfNumOfDiv = (numOfDivChar - len - 2) / 2;
    for (int i = 0; i < halfNumOfDiv; ++i)
    {
        cout << divisionChar;
    }
    cout << " " << info << " ";
    for (int i = 0; i < halfNumOfDiv; ++i)
    {
        cout << divisionChar;
    }
    cout << endl;
}