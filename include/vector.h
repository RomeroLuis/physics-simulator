#ifndef Vec_H
#define Vec_H

template <class T, unsigned int size>;
class Vec
{
public:
    Vec(T* set);
    Vec(const Vec& A);
    ~Vec();
    Vec& operator = (const Vec& RHS);
    Vec& operator += (const Vec& RHS);
    Vec& operator -= (const Vec& RHS);
    Vec& operator *= (const Vec& RHS);
//    Vec& operator ^= (const Vec& RHS);
    Vec operator + (const Vec& RHS) const;
    Vec operator - (const Vec& RHS) const;
    Vec operator * (const Vec& RHS) const;
//    Vec operator ^ (const Vec& RHS) const;
    Vec operator * (int C) const;
    friend Vec operator *(int C, const RHS);

    Vec& operator [](unsigned int index);
    const Vec& operator [](unsigned int index) const;
private:
    T* D;
};

#endif // Vec_H
