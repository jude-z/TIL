//
// Created by admin on 2/28/26.
//

#include "Risk.h"

double RISK_LEVEL::incentive_ratio(int risk_type) {
    switch (risk_type) {
        case 0:
            return 0.3;
        case 1:
            return 0.2;
        case 2:
            return 0.1;
    }
}
