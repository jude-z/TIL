//
// Created by admin on 2/28/26.
//

#include "HybridCar.h"

HybridCar::HybridCar(int electricGauge, int gasolineGauge): Car(gasolineGauge), electricGauge(electricGauge) {

}

int HybridCar::GetElectricGauge() const {
    return this -> electricGauge;
}
