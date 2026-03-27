//
// Created by admin on 2/28/26.
//

#include "Car.h"

Car::Car(int gasolineGauge): gasolineGauge(gasolineGauge){
}

int Car::GetGasGauge() const {
    return this -> gasolineGauge;
}
