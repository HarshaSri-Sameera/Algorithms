#include <iostream>
using namespace std;

struct dist{
    int feet;
    int inch;
}d1, d2;

struct dist add(struct dist a, struct dist b)
{
    struct dist d;
    d.feet=a.feet+b.feet;
    if(a.inch+b.inch >= 12)
    {
        d.feet=(d.feet+(a.inch+b.inch)/12);
        d.inch=((a.inch+b.inch)-((a.inch+b.inch)/12)*12);
    }
    else
    {
        d.inch=a.inch+b.inch;
    }
    return d;
}

int main()
{
    d1={12, 2};
    d2={14, 11};
    struct dist dis=add(d1, d2);
    cout<<dis.feet<<" feet and "<<dis.inch<<" inch";
}

/* #Output:
27 feet and 1 inch */
