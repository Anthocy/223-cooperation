#include<stdio.h>
#include<math.h>
	int main(void)
	{  
	  /*********Begin*********/
	  float a,b,c,s;
      float x1,x2;

      scanf("%f,%f,%f",&a,&b,&c);

      s = b * b - 4 * a * c;

      if (s < 0.0)
      {
          printf("Please enter the coefficients a,b,c:\nerror!\n");
          return 0;
      }
      else
      {
          x1 = (-b + sqrt(s)) / (2*a);
          x2 = (-b - sqrt(s)) / (2*a);
      }

      printf("Please enter the coefficients a,b,c:\n");
      printf("x1=%.4f, x2=%.4f\n",x1,x2);
	  
	  /*********End**********/ 
       return 0;
	}
