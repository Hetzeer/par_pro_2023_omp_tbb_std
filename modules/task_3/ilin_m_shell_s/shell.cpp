// Copyright 2023 Ilin Maxim

#include <iostream>
#include "../../../modules/task_3/ilin_m_shell_s/shell.hpp"


std::vector<int> getRandomVector(int size) {
    std::mt19937 gen;
    gen.seed(static_cast<unsigned int>(time(0)));
    std::vector<int> vec(size);
    for (int i = 0; i < size; i++) { vec[i] = gen() % 100; }
    return vec;
}