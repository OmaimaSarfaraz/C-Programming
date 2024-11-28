#include<iostream>
using namespace std;
int main()
{
   double distance=0,km,m,cm,mm,micro_m;
   printf("Enter distance between SHU and your home in miles: ");
   scanf("%lf",&distance);
   km=distance*1.609344;
   m=km*1000;
   cm=m*100;
   mm=cm*10;
   micro_m=mm*1000;
   printf("Distance in kilometers: %.2lf km\n",km);
   printf("Distance in meters: %.2lf km\n",m);
   printf("Distance in centimeters: %.2lf km\n",cm);
   printf("Distance in millimeters: %.2lf km\n",mm);
   printf("Distance in micrometers: %.2lf km\n",micro_m);
   return 0;
}
