// CH.SC.U4CSE24015
//Accept inner and outer radius of a ring and print the perimeter
// and area of the ring.
#include <stdio.h>
void main(){
      float pi = 3.14;
      float outer_r; // declaring outer radius
      float inner_r; // declaring inner radius
      printf("Enter the outer radius : ");
      scanf("%f",outer_r); // getting outer radius from user
      printf("Enter the inner radius : ");
      scanf("%f",inner_r); // getting inner radius from user
      float perimeter = 2 * pi * (outer_r + inner_r);
      float area = pi * (outer_r*outer_r - inner_r*inner_r);
      printf("The perimeter is : %.2f",perimeter);
      printf("The area is : %.2f",area);
}
