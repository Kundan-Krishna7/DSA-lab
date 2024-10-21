//add two distance in (KM meter by passing structure to a function
#include<stdio.h>
int main(){
    struct distance{
        float km;
        float meter;
    };
    
    struct distance addDistance(struct distance d1, struct distance d2)
    {
        struct distance sum;
        sum.km = d1.km + d2.km;
        sum.meter = d1.meter + d2.meter;
        return sum;
    }
    
    struct distance d1 = {5.4, 330};
    struct distance d2 = {3.2, 175};
    
    struct distance sum = addDistance(d1, d2);
    
    printf("Sum of distances in KM: %.2f\n", sum.km);
    printf("Sum of distances in meter: %.2f\n", sum.meter);
    
    return 0;
} 