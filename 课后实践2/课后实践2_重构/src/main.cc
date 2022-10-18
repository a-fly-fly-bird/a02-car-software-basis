/*
 * 车载软件开发基础 demo 1
 * author: 谭勇
 * date: 2022/10/1
 */

#include <iostream>
#include "bind_info.h"
#include "helper_function.h"

using namespace std;

int main() {
    auto *smartCars = InputInformation();
    auto *students = InputStudents();
    auto *bindInfos = new BindInfo[kPurchaseAmount];
    Bind(students, smartCars, bindInfos);
    MapBind(bindInfos);
    string stuId = "";
    while (stuId != "-1") {  // 输入没有结束，cin 就返回 true，条件就为真
        cout << "请输入学号查询绑定信息:" << endl;
        cin >> stuId;
        GetBindInfo(stuId);
    }
    SaveMap("output.txt");
    ReadInfoFromFile("output.txt");
    FormatDivision("程序成功结束运行，欢迎再次使用", '*', 100);
}
