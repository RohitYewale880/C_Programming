/*12.	Write a program which accept radius of circle from user and calculate its Circumference.
 Consider value of PI as 3.14. (Circumference =  2 * PI * Radius)  */
 #include<stdio.h>
 #include<conio.h>

 int main()
 {

     float Rad = 0.0, Cir = 0.0, PI = 3.14;

     printf("Enter The Radius:");
     scanf("%f",&Rad);

     Cir = 2 * PI * Rad;

     printf("Circumference of radius %0.2f is : %0.2f",Rad,Cir);
     getch();
     return 0;
 }


