#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct point
{

	float lat; //where lat  is the latitude or x-coordinate
	float longi; //where longi  is the longitude or y-coordinate

}pnt;

//declaring functions that are used

float getDistance(pnt a, pnt b);
void intersection(pnt x1, pnt x2, pnt x3, pnt x4 );
void parallel_Lines(pnt x1, pnt x2, pnt x3, pnt x4);
void colinear(pnt x1, pnt x2, pnt x3);
void areaTri(pnt x1, pnt x2, pnt x3);
void periTri(pnt x1, pnt x2, pnt x3);
void areaRect( pnt x1,  pnt x2);
void periRect( pnt x1,  pnt x2);
void areaCircle(pnt x1, pnt x2);
void perimeterCircle(pnt x1, pnt x2);
void areaEllipse( pnt x1,pnt x2,pnt x3);
void periEllipse( pnt x1,pnt x2,pnt x3);
void point(pnt x1, pnt x2, pnt x3);


void main(){
    
    int choice;
    
    printf("Enter 1 to calculate distance between two points.\n");
    printf("Enter 2 to calculate point of intersection between two lines.\n");
    printf("Enter 3 to check if two lines are parallel.\n");
    printf("Enter 4 to check if three points are colinear.\n");
    printf("Enter 5 to calculate the area and perimeter of a triangle.\n");
    printf("Enter 6 to calculate the area and perimeter of a rectangle.\n");
    printf("Enter 7 to calculate the area and circumferance of a circle.\n");
    printf("Enter 8 to check the position of a point with respect to a circle.\n");
    printf("Enter 9 to calculate the area and perimeter of a ellipse.\n\n");
   

    printf("Enter number to perform your desired work: \n");
    scanf("%d", &choice);

    printf("\n");

        switch(choice) {

            case 1 : {//distance btwn two points

                        pnt x1, x2;
    
                        printf("Enter coordinate of point a: ");
                        scanf("%f %f", &x1.lat, &x1.longi);

                        printf("Enter coordinate of point b: ");
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Distance between a and b: %lf\n", getDistance(x1,x2));
                     
                     break;
            }
            case 2 : {//intersecting lines
                        
                        pnt x1, x2, x3, x4;

                        printf("ENTER THE COORDINATES OF P,Q,R,S, where PQ and RS are two intersecting lines\n\n");

                        printf("Enter value of P(x1,y1) :\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi);

                        printf("Enter value of Q(x2,y2) :\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Enter value of R(x3,y3) :\n"); 
                        scanf("%f %f", &x3.lat, &x3.longi);

                        printf("Enter value of S(x4,y4) :\n"); 
                        scanf("%f %f", &x4.lat, &x4.longi);

                        intersection(x1,x2,x3,x4);
                     
                     break;
            }
            case 3 : {//parallel lines

                        pnt x1, x2, x3, x4;

                        printf("ENTER THE COORDINATES OF P, Q, R, and S to check if PQ and RS are parallel\n\n");

                        printf("Enter value of P(x1,y1) :\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi);

                        printf("Enter value of Q(x2,y2) :\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Enter value of R(x3,y3) :\n"); 
                        scanf("%f %f", &x3.lat, &x3.longi);

                        printf("Enter value of S(x4,y4) :\n"); 
                        scanf("%f %f", &x4.lat, &x4.longi);

                        parallel_Lines(x1,x2,x3,x4);

                     break;
            }
            case 4 : {//colinearity of points
                    
                        pnt x1,x2,x3;

                        printf("ENTER THE COORDINATES OF P, Q, R, to check the colinearity\n\n");

                        printf("Enter value of P(x1,y1) :\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi);

                        printf("Enter value of Q(x2,y2) :\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Enter value of R(x3,y3) :\n"); 
                        scanf("%f %f", &x3.lat, &x3.longi);

                        colinear(x1,x2,x3);

                     break;
            }
            case 5 : {//triangle


                        pnt x1,x2,x3;

                        printf("ENTER THE COORDINATES OF P, Q, R, where PQR is a triangle\n\n");

                        printf("Enter value of P(x1,y1) :\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi);

                        printf("Enter value of Q(x2,y2) :\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Enter value of R(x3,y3) :\n"); 
                        scanf("%f %f", &x3.lat, &x3.longi);

                        areaTri(x1,x2,x3);
                        periTri(x1,x2,x3);
    

                     break;  
            }
            case 6 : {//rectangle

                        pnt x1, x2; 
                        

                        printf("Enter value of x1 and y1 [where (x1,y1) are coordintes of one vertex of a rectangle)]:\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi); 
                        
                        printf("Enter value of x2 and y2 [where (x1,y1) are coordintes of opposite vertex of that rectangle)]:\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);


                        areaRect(x1, x2);
                        periRect(x1, x2);
                    
                     break;    
            }
            case 7 : {//circle

                        pnt x1, x2; 

                        printf("Enter value of x1 and y1 [where (x1,y1) is the center of the circle)]:\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi); 
                        
                        printf("Enter value of x2 and y2 [where (x2,y2) is any point in space through which the circle passes]:\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        areaCircle(x1, x2);
                        perimeterCircle(x1, x2);
                   
                     break;  
            }
            case 8 :{ //position of point wrt circle

                        pnt x1, x2, x3; 

                        printf("Enter value of x1 and y1 [where (x1,y1) is the center of the circle)]:\n"); 
                        scanf("%f %f", &x1.lat, &x1.longi); 
                        
                        printf("Enter value of x2 and y2 [where (x2,y2) is any point in space through which the circle passes]:\n"); 
                        scanf("%f %f", &x2.lat, &x2.longi);

                        printf("Enter value of x3 and y3 [where (x3,y3) is any point in space]:\n"); 
                        scanf("%f %f", &x3.lat, &x3.longi);

                        point(x1,x2,x3);
                     
                     break;
        }
            case 9 :{ //ellipse

                            pnt x1,x2,x3;

                            printf("ENTER THE COORDINATES OF A,O,B where \nA is one end point of major axis of the ellipse \nB is one end point of minor axis of the ellipse\nand O is the center of ellipse.\n\n ");

                            printf("Enter value of A(x1,y1) :\n"); 
                            scanf("%f %f", &x1.lat, &x1.longi);

                            printf("Enter value of O(x2,y2) :\n"); 
                            scanf("%f %f", &x2.lat, &x2.longi);

                            printf("Enter value of B(x3,y3) :\n"); 
                            scanf("%f %f", &x3.lat, &x3.longi);

                            areaEllipse(x1,x2,x3);
                            periEllipse(x1,x2,x3);

                     break;
            }
           default : printf("not a valid choice\n");                           
        }
           
}



float getDistance(pnt a, pnt b) //function to find distance btwn two points
{
    float distance;
    distance =sqrt((a.lat - b.lat) * (a.lat - b.lat) + (a.longi-b.longi) *(a.longi-b.longi)) ;
    
    return distance;
}

void intersection(pnt x1, pnt x2, pnt x3, pnt x4 ) // function to find point of intersection between two lines
{
    float m1=(x2.longi - x1.longi) / ( x2.lat-x1.lat);
    float c1= x1.longi - m1*(x1.lat);

    float m2=(x4.longi - x3.longi) / ( x4.lat-x3.lat);
    float c2= x3.longi - m2*(x3.lat);

    float x= (c2-c1)/(m1-m2);
    float y= (m2*c1-m1*c2)/(m1-m2);

    printf("The point of intersection between PQ and RS : ( %.2f , %.2f )\n",x,y);
}

void parallel_Lines(pnt x1, pnt x2, pnt x3, pnt x4) // function to check if two lines are parallel
{
	if ((x2.lat==x1.lat) && (x4.lat==x3.lat)) { 
    		printf("\nPQ and RS are parallel!\n");
	}

    else if ((x2.lat==x1.lat) || (x4.lat==x3.lat)) {
    		printf("\nPQ and RS are not parallel!\n");
    }

    else if (((x2.longi - x1.longi) / ( x2.lat-x1.lat ) - (x4.longi - x3.longi) / ( x4.lat-x3.lat)) == 0.0) { 
    		printf("\nPQ and RS are parallel!\n");
    }

    else {
    printf("\nPQ and RS are not parallel!\n");
    }
}


void colinear(pnt x1, pnt x2, pnt x3) //fuction to check if 3 points are collinear
{
    float area = abs(0.5*((x1.lat*x2.longi-x2.lat*x1.longi)+(x2.lat*x3.longi-x3.lat*x2.longi)+(x3.lat*x1.longi-x1.lat*x3.longi)));
    
    if(area==0)
    {
      printf("The 3 points are collinear.\n");
    }

    else 
    {
      printf("The 3 points are non-collinear.\n");
    } 
}

void areaTri(pnt x1, pnt x2, pnt x3) // fuction to find area of a triangle
{
   float area = abs(0.5*((x1.lat*x2.longi-x2.lat*x1.longi)+(x2.lat*x3.longi-x3.lat*x2.longi)+(x3.lat*x1.longi-x1.lat*x3.longi)));
   printf("The area of the triangle is : %f/n",area );
}

void periTri(pnt x1, pnt x2, pnt x3) //function to find the perimeter of a triangle
{
    float perimeter = getDistance(x1,x2); + getDistance(x2,x3); + getDistance(x3,x1);
    printf("The perimeter of the triangle is : %f/n",perimeter );
}

void areaRect( pnt x1,  pnt x2) //function to find the area of a rectangle
{
	struct point l, b; //where l represents the length and b represents the breadth

	l.lat = abs(x2.lat - x1.longi); //finding length
	b.longi = abs(x2.longi - x1.longi); //finding breadth

	float a = abs(l.lat * b.longi); //where a is the area
	
	printf("\nArea of the given Rectangle = %f", a);
}

void periRect( pnt x1,  pnt x2)  //function to find the perimeter of a rectangle
{
	struct point l, b; //where l represents the length and b represents the breadth 

	l.lat = abs(x2.lat - x1.longi); //finding length
	b.longi = abs(x2.longi - x1.longi);  //finding breadth

	float p = abs(2 * (l.lat + b.longi)); //where p is the perimeter 

	printf("\nPerimeter of rectangle = %f", p);
}

void areaCircle(pnt x1, pnt x2) {  // function to find the area of a circle

    float r= getDistance(x1,x2);
    float a= 3.14*r*r; // where a is the area of the circle
    printf("The area of the circle is : %f\n", a);
}

void perimeterCircle(pnt x1, pnt x2) { // function to find the perimeter of circle

    float r= getDistance(x1,x2);
    float c= 2*3.14*r ; // where c is the circumferance of the circle
    printf("The circumferance of the circle is : %f\n", c);
}

void point(pnt x1, pnt x2, pnt x3) { //function to check position of point wrt a circle

    float radius= getDistance(x1,x2);
    float distance= getDistance(x3,x1);

    if(distance < radius)  
    {  
        printf("Point (%0.2f, %0.2f) is inside the Circle\n",x3.lat , x3.longi);  
    }  
    else if(distance > radius)  
    {  
        printf("Point (%0.2f, %0.2f) is outside the Circle\n", x3.lat, x3.longi);  
    }  
    else  
    {  
        printf("Point (%0.2f, %0.2f) is on the Circle\n", x3.lat, x3.longi);  
    }  
}

void areaEllipse( pnt x1,pnt x2,pnt x3)  //function to find area of ellipse
{
    float a,b; //where 2*a and 2*b are the length of major and minor axis respectively
    a=getDistance(x1,x2);
    b=getDistance(x3,x2);

    float area= a*b*3.14;

    printf("The area of the ellipse is %f\n", area);
}


void periEllipse( pnt x1,pnt x2,pnt x3)  //function to find perimeter of ellipse
{
    float a,b; //where 2*a and 2*b are the length of major and minor axis respectively
    a=getDistance(x1,x2);
    b=getDistance(x3,x2);

    float p =3.14*(3*(a+b)-sqrt((3*a+b)*(a+3*b))); //approximation circumferance formula 

    printf("The circumferance of the ellipse is %f\n", p);
}