#ifndef BIND_INFO_H
#define BIND_INFO_H

#include "printable.h"
#include "saveable.h"
#include "smart_car.h"
#include "student.h"

#include<map>

static int kPurchaseAmount = 0;
static int kAvailableAmount = 0;
static int kStudentAmount = 0;

static map<string, BindInfo *> kBindMap;

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

#endif