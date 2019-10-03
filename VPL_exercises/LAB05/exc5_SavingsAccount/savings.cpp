#include "savings.h"

SavingsAccount::SavingsAccount(double value):
  savings_balance(value){}

double SavingsAccount::calculate_monthly_balance(){
  return (this->savings_balance*SavingsAccount::annual_savings_rate)/12;
}
