#ifndef BIND_INFO_H
#define BIND_INFO_H

#include "printable.h"
#include "saveable.h"
#include "smart_car.h"
#include "student.h"
#include "helper_function.h"
#include<string>
#include<map>

static int kPurchaseAmount = 0;
static int kAvailableAmount = 0;
static int kStudentAmount = 0;

class BindInfo : public Printable, public Saveable
{
private:
    Student *student_;
    SmartCar *smart_car_;

public:
    Student *GetStudent() const;

    void SetStudent(Student *);

    SmartCar *GetSmartCar() const;

    void SetSmartCar(SmartCar *);

    void Print() const override;

    bool Save(const std::string &) const override;

    friend std::ostream &operator<<(std::ostream &, const BindInfo &);
};

static std::map<std::string, BindInfo *> kBindMap;

bool SaveMap(std::string filename);

bool ReadInfoFromFile(std::string filename);

BindInfo *GetBindInfo(const std::string &stuId);

bool MapBind(BindInfo *bind_infos);

bool Bind(Student *students, SmartCar *smartCars, BindInfo *bind_infos);

Student *InputStudents();

SmartCar *InputInformation();

#endif