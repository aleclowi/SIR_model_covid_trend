#include <string>
#include <cmath>
using namespace std;

#include "sir.h"

SIR::SIR(double cm, double cn, int P, double f, double istar, double beta, double gamma, double mu) {
    cm_ = cm;
    cn_ = cn;
    P_ = P;
    f_ = f;
    i_star = istar;
    beta_ = beta;
    gamma_ = gamma;
    mu_ = mu;

    time_t = 0;
}

void SIR::step(int dt) {
    ++time_t;
}

// a function get time to return the current time in days;
double SIR::get_time() {
    return time_t;
}

// a function get sn to return the current fraction of susceptible normal people;
double SIR::get_sn() {
    return sn_;
}

// a function get in to return the current fraction of infected normal people;
double SIR::get_in() {
    // i ∗ (1 − f)
    return i_star * (1 - f_);
}

// a function get rn to return the current fraction of recovered normal people;
double SIR::get_rn() {
    rn_ = time_t;
    return rn_;
}

// a function get sm to return the current fraction of susceptible morons;
double SIR::get_sm() {
    // (1 − i∗)f
    return (1 - i_star) * f_;
}

// a function get im to return the current fraction of infected morons;
double SIR::get_im() {
    return i_star * f_;
}

// a function get rm to return the current fraction of recovered morons
double SIR::get_rm() {
    rm_ = time_t;
    return rm_;
}
