//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_HYBRIDCAR_H
#define CPP_STUDY_HYBRIDCAR_H
#include "Car.h"

class HybridCar : public Car{
private:
    int electricGauge;
public:
    HybridCar(int electricGauge, int gasolineGauge);
    int GetElectricGauge() const;
};


#endif //CPP_STUDY_HYBRIDCAR_H