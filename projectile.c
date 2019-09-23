#include<stdio.h>
#include<math.h>
#include<ctype.h>

double flighttime (double time,double distance,double velocity,double theta);
double flightht (double height,double distance,double velocity,double theta,double time);

int main(void)
{
double theta, distance, velocity, time, height;

printf("Enter the Angle of elevation in radians\n");
scanf("%lf",&theta);
printf("Enter the Velocity\n");
scanf("%lf",&velocity);
printf("Enter the Distance to target\n");
scanf("%lf",&distance);

time =  flighttime (time, distance, velocity, theta);

height =  flightht (height, distance, velocity, theta, time);

printf(" time of flight = %lfs\n", time);

printf(" height = %lfm\n", height);

printf(" angle = %lf radian\n", (cos(theta)));



return 0;
}

double flighttime (double time,double distance,double velocity,double theta)
{
time = (distance)/ ((velocity) * (cos(theta)));
return time;

}

double flightht (double height,double distance,double velocity,double theta,double time)
{

double g = 9.81;
height = (velocity * (sin(theta)) *  time )- ((g * (time * time))/2);
return height;
}

/*
double theta /* angle of elevation in radians
double distance /* horiz ontal distance to target in meters
double velocity /* projectile initial velocity in meters/second
double time /* time of flight in seconds
double height /* height at impact in meters

*/
