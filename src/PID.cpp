#include "PID.h"
#include <cmath>
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;
  p_error = d_error = i_error = 0.0;
}

void PID::UpdateError(double cte) {
  i_error += cte;
  d_error = cte - p_error;
  p_error = cte;
  cout << "P error: " << p_error << endl;
  cout << "I error: " << i_error << endl;
  cout << "D error: " << d_error << endl;
}

double PID::TotalError() {
  return - Kp * p_error - Ki * i_error - Kd * d_error;;
}

