//
// Created by Yunze Liao on 8/18/23.
//

#include "BlackScholes.h"
#include <cmath>
#include "../libs/math/NormalDistribution.h"

BlackScholes::BlackScholes(double S, double K, double T, double r, double sigma)
    : S(S), K(K), T(T), r(r), sigma(sigma) {
    d1 = (log(S/K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
    d2 = d1 - sigma * sqrt(T);
}

double BlackScholes::callPrice() {
    return S * NormalDistribution::cdf(d1) - K * exp(-r * T) * NormalDistribution::cdf(d2);
}

double BlackScholes::putPrice() {
    return K * exp(-r * T) * NormalDistribution::cdf(-d2) - S * NormalDistribution::cdf(-d1);
}
