//
// Created by Yunze Liao on 8/18/23.
//

#include "NormalDistribution.h"
#include <cmath>

const double PI = 3.14159265358979323846;

double NormalDistribution::erf(double z) {
    const int N = 10;  // Number of terms in the Taylor series
    double sum = 0.0;

    for (int n = 0; n <= N; n++) {
        sum += pow(-1.0, n) * pow(z, 2*n + 1) / (2*n + 1) / tgamma(n + 1);
    }

    return 2 / sqrt(PI) * sum;
}

double NormalDistribution::cdf(double x) {
    return 0.5 * (1 + erf(x / sqrt(2.0)));
}
