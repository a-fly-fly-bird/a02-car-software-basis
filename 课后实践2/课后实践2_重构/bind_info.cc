#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include "printable.h"
#include "saveable.h"
#include "smart_car.h"
#include "student.h"
#include "bind_info.h"

using namespace std;

Student *BindInfo::GetStudent() const
{
    return student_;
}

void BindInfo::SetStudent(Student *student)
{
    student_ = student;
}

SmartCar *BindInfo::GetSmartCar() const
{
    return smart_car_;
}

void BindInfo::SetSmartCar(SmartCar *smart_car)
{
    smart_car_ = smart_car;
}

void BindInfo::Print() const
{
    cout << *this << endl;
}

bool BindInfo::Save(const string &filename) const
{
    ofstream out(filename, ios::app);
    if (!out.is_open())
    {
        cout << "文件打开失败" << endl;
        return false;
    }
    out << *this << endl;
    out.close();
    return true;
}

ostream &operator<<(ostream &os, const BindInfo &bindInfo)
{
    return os << "绑定的学生信息是：\n"
              << *bindInfo.GetStudent() << endl
              << "绑定的智能汽车信息是：\n"
              << *bindInfo.GetSmartCar() << endl;
}
