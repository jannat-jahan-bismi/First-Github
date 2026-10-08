
#include <stdio.h>

int main()
{
    double m;
     int r=0;
     scanf("%lf",&m);
     double N[6]={100.00,50.00,20.00,10.00,5.00,2.00};
      printf("NOTAS:\n");
     for(int i=0;i<6;i++)
     {
       r= m/N[i];
       m=m-(r*N[i]);
          printf("%d nota(s) de R$ %.2lf\n",r,N[i]);
     }
     printf("MOEDAS:\n");
double C[6]={1, 0.50, 0.25, 0.10, 0.05 ,0.01};

     for(int j=0;j<6;j++)
     {
       r= (m +0.00001)/C[j];
       m=m-(r*C[j]);
          printf("%d moeda(s) de R$ %.2lf\n",r,C[j]);
     }

return 0;
}
