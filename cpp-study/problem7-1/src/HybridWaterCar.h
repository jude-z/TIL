//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_HYBRIDWATERCAR_H
#define CPP_STUDY_HYBRIDWATERCAR_H
#include "HybridCar.h"

class HybridWaterCar : public HybridCar{
private:
    int waterGauge;
public:
    HybridWaterCar(int waterGauge, int electricGauge, int gasolineGauge);
    void ShowCurrentGauge() const;
};


#endif //CPP_STUDY_HYBRIDWATERCAR_H