#include <stdio.h>

//make a function to calculate circumference.
void circumference(float r){
     printf("Circumference: %f\n",2*3.14*r);
}

//make a function to calculate area.
void area(float r){
     printf("Area: %f\n",3.14*r*r); 
}

int main(){
  //get the input from the user.
    float r;
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);

  //declare the funtion pointer name as op
    void (*op)(float);
   
  //assign the circumference funtion to op.  
    op=circumference;
    op(r);
  //Now, assign the area function to op.
    op=area;
    op(r);
}
