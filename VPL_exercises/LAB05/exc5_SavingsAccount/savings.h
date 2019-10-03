class SavingsAccount{
  private:
    double savings_balance;
  public:
    SavingsAccount(double);
    double calculate_monthly_balance();
    static double annual_savings_rate;
};
