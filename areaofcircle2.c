
#include <stdio.h>




#include <string.h>







float areaofcircle (float rad)


{


 printf("rad: %f\n", rad);


 return (rad * rad * 3.14);


}







int main(int argc, char* argv[])


{







 float area;


 char smallString[256], bigString[256];


 int smallrad;


 int bigrad;


 int swaprad;







 if (argc != 3)


 {


   printf("Did not input valid range of radii. Input a radius\n");


 while (1)


 {


   fgets(smallString, 256, stdin);


   if (sscanf(smallString, "%d", &smallrad) == 1) break;


     printf("Not a valid radius size - try again!\n");


 }







 while (1)


 {


   fgets(bigString, 256, stdin);


   if (sscanf(bigString, "%d", &bigrad) == 1) break;


     printf("Not a valid radius size - try again!\n");


 }












 if (smallrad > bigrad)


 {


   swaprad = smallrad;


   smallrad = bigrad;


   bigrad =swaprad;


 }







 for (float i = smallrad; i <= bigrad; i++)


 {


   area = areaofcircle(i);


   printf("area: %f\n\n", area);


 }


 }
