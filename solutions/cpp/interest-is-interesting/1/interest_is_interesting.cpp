// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    double res;
    if (balance < 0)
        res = 3.213;
    if (balance >= 0 && balance < 1000)
        res = 0.5;
    if (balance >= 1000 && balance < 5000)
        res = 1.621;
    if (balance >= 5000)
        res = 2.475;
    return res;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    return interest_rate(balance)/100 * balance;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    return yearly_interest(balance) + balance;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int years = 0;
    double current_balance = balance;
    while(current_balance < target_balance){
        current_balance = annual_balance_update(current_balance);    
        years++;
    }
    return years;
}