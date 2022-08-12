#ifndef SIR_H_
#define SIR_H_

// Define your class here

class SIR
{
public:
    //the elapsed time in days since the start of the epidemic;
    double time_t;

    // sn(t): the fraction of the population who are susceptible normal people at time t;
    // sm(t): the fraction of the population who are susceptible morons at time t;
    double sn_, sm_;

    // in(t): the fraction of the population who are infected normal people at time t;
    // im(t): the fraction of the population who are infected morons at time t;
    double in_, im_;

    // rn(t): the fraction of the population who are removed normal people at time t;
    // rm(t): the fraction of the population who are removed morons at time t;
    double rn_ = 0, rm_ = 0;

    // cn: the daily number of contacts for normal people, assumed constant;
    // cm: the daily number of contacts for morons, assumed constant;
    double cn_, cm_;

    // P: the total number of people in the city;
    int P_;

    // the fraction of people who are infected at time t = 0;
    double i_star = 0;
    // β (beta): the probability of getting COVID-19 when interacting with a sick person on a given day;
    double beta_;

    // μ (mu): the risk reduction factor experienced by those interacting with some- one wearing a mask;
    double mu_;

    // γ (gamma): the daily rate people recover/die from the ill state and move into the removed group
    double gamma_;

    // f: the fraction of people in the city who are morons
    // (so fP is the number of morons and (1 − f)P is the number of normal people);
    double f_;

    // a function step accepting a value of ∆t and advancing the simulations forward that length of time in days
    void step(int);

    // a function get time to return the current time in days;
    double get_time();

    // a function get sn to return the current fraction of susceptible normal people;
    double get_sn();
    // a function get in to return the current fraction of infected normal people;
    double get_in();
    // a function get rn to return the current fraction of recovered normal people;
    double get_rn();

    // a function get sm to return the current fraction of susceptible morons;
    double get_sm();
    // a function get im to return the current fraction of infected morons;
    double get_im();
    // a function get rm to return the current fraction of recovered morons
    double get_rm();

    // SIR p1(cm, cn, P, f1, istar, beta, gamma, mu);
    SIR(double cm, double cn, int P, double f, double istar, double beta, double gamma, double mu); // Constructor
};

#endif
