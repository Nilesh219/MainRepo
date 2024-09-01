#include <iostream>
using namespace std;
template <class T>
class Vector
{
    private:
        T *arr;
        int size;
    public:
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T sumdotproduct(Vector &v)
        {
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 2;
    // v1.arr[2] = 3;

    // Vector v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 5;
    // v2.arr[2] = 6;

    // int a = v1.sumdotproduct(v2);
    // cout << a << endl;

    // Vector<float> v1(3);
    // v1.arr[0] = 1.0;
    // v1.arr[1] = 2.1;
    // v1.arr[2] = 3.5;

    // Vector<float> v2(3);
    // v2.arr[0] = 4.3;
    // v2.arr[1] = 5.6;
    // v2.arr[2] = 6.9;

    // float a = v1.sumdotproduct(v2);
    // cout << a << endl;

    Vector<double> v1(3);
    v1.arr[0] = 1.0;
    v1.arr[1] = 2.1;
    v1.arr[2] = 3.5;

    Vector<double> v2(3);
    v2.arr[0] = 4.3;
    v2.arr[1] = 5.6;
    v2.arr[2] = 6.9;

    double a = v1.sumdotproduct(v2);
    cout << a << endl;
    

    return 0;
}