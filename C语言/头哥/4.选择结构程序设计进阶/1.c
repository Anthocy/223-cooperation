#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int Area;
      float Weight, total_price;
      int extra_weight;
      float base_price, extra_price;
      scanf("%d,%f",&Area,&Weight);
      
      total_price = 0.0;
      extra_price = 0.0;
      extra_weight = 0.0;
      base_price = 0.0;

      if (Weight <= 0)
      {
          // printf("Error in Area\nPrice:  0.00\n");
          return 0;
      }

      if (Weight > 1.0)
      {
          if ((int)Weight < Weight)
          {
              extra_weight = (int)Weight;
          }
          else
          {
              extra_weight = Weight - 1;
          }
          
      }
      else
      {
          extra_weight = 0;
      }
      
      switch(Area)
      {
          case 0:
          {
              base_price = 10.0;
              extra_price = 3.0;
              break;
          }
          case 1:
          {
              base_price = 10.0;
              extra_price = 4.0;
              break;
          }
          case 2:
          {
              base_price = 15.0;
              extra_price = 5.0;
              break;
          }
          case 3:
          {
              base_price = 15.0;
              extra_price = 6.5;
              break;
          }
          case 4:
          {
              base_price = 15.0;
              extra_price = 10.0;
              break;
          }
          default:
          {
              printf("Error in Area\n");
          }
      }

      total_price = base_price + extra_weight * extra_price;

      printf("Price: %.2f\n",total_price);

	  
	  /*********End**********/ 
       return 0;
	}
