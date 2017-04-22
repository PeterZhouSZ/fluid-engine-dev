// Copyright (c) 2017 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#ifndef SRC_PYTHON_VECTOR_H_
#define SRC_PYTHON_VECTOR_H_

#include <pybind11/pybind11.h>

void addVector3F(pybind11::module& m);
void addVector3D(pybind11::module& m);

#endif  // SRC_PYTHON_VECTOR_H_
