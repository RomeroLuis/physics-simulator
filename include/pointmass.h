#ifndef OBJECT_H
#define OBJECT_H
#include "vec.h"


class Object
{
public:
    Object(Vec vel, Vec pos, double M);
    ~Object();
    Object(const Object& A);
    void setMass(double M);
    void setVel(const Vec& Vel);
    void Move(const Vec& Pos);
    double getMass() const;
    Vec getVel() const;
    Vec Position() const;
    void Move(float time);
    void ApplyForce(const Vec& extra);
    Vec NetForce() const;
    void Restore(const Vec& newForce);
private:

};

#endif // OBJECT_H
