#ifndef PARTICLES_HPP
#define PARTICLES_HPP

#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <iostream>

struct Point3D{
    float x_, y_, z_;

    __host__ __device__ Point3D(float x, float y, float z) : x_(x), y_(y), z_(z) {}

    __host__ __device__ void print() const {
        printf("Point: (%.2f, %.2f, %.2f)", x_, y_, z_);
    } 
};
#endif