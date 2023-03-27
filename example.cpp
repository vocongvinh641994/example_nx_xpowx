#include <stdio.h>
#include <math.h>

void nxx(){
    double a = 0.2;
     for(int i = 1; i< 30; i++){
         a = a*0.2;
        printf("%f \n",a);
    }
}

void npowx(){
    for(int i = 0; i< 30; i++){
        printf("%f \n",pow(0.2,i));
    }
}

int main()
{
    nxx();
    npowx();
    return 0;
}
