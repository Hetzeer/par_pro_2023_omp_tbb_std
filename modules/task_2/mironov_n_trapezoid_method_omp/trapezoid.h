// Copyright 2023 Mironov Nikita
#ifndef MODULES_TASK_2_MIRONOV_N_TRAPEZOID_METHOD_OMP_TRAPEZOID_H_
#define MODULES_TASK_2_MIRONOV_N_TRAPEZOID_METHOD_OMP_TRAPEZOID_H_

#include <omp.h>
#include <vector>
#include <utility>
#include <iostream>
#include <cmath>

double trapezoid_method(
    double (*f)(std::vector<double>),
    const std::vector<std::pair<double, double>>& bounds,
    int N);

#endif  // MODULES_TASK_2_MIRONOV_N_TRAPEZOID_METHOD_OMP_TRAPEZOID_H_
