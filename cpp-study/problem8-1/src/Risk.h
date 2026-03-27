//
// Created by admin on 2/28/26.
//

#ifndef CPP_STUDY_RISK_H
#define CPP_STUDY_RISK_H


namespace RISK_LEVEL {
    enum {
        RISK_A,RISK_B,RISK_C
    };
    double incentive_ratio(int risk_type);
}


#endif //CPP_STUDY_RISK_H