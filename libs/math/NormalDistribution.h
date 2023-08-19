//
// Created by Yunze Liao on 8/18/23.
//

#ifndef OPM_NORMALDISTRIBUTION_H
#define OPM_NORMALDISTRIBUTION_H


#ifndef NORMALDISTRIBUTION_H
#define NORMALDISTRIBUTION_H

class NormalDistribution {
public:
    static double erf(double z);
    static double cdf(double x);
};

#endif  // NORMALDISTRIBUTION_H


#endif //OPM_NORMALDISTRIBUTION_H
