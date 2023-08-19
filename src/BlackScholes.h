//
// Created by Yunze Liao on 8/18/23.
//

#ifndef OPM_BLACKSCHOLES_H
#define OPM_BLACKSCHOLES_H


class BlackScholes {
public:
    BlackScholes(double S, double K, double T, double r, double sigma);

    double callPrice();
    double putPrice();

private:
    double S, K, T, r, sigma, d1, d2;
};


#endif //OPM_BLACKSCHOLES_H
