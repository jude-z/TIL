//
// Created by admin on 2/28/26.
//

#include "HybridWaterCar.h"
#include <iostream>
using namespace std;
HybridWaterCar::HybridWaterCar(int waterGauge, int electricGauge, int gasolineGauge):
HybridCar(electricGauge,gasolineGauge), waterGauge(waterGauge){

}

void HybridWaterCar::ShowCurrentGauge() const {
    cout << "left gasoline : " << GetGasGauge() << endl;
    cout << "left electric : " << GetElectricGauge() << endl;
    cout << "left water : " << this -> waterGauge << endl;
}
