#include <stdio.h>

struct airport
{
    char name[50];
    char city[50];
    int timeZone;
    int numberOfTerminals;
    char terminals[1];
    
} airportList[111];

struct flight
{
	char airline[2];
	int number;
	int from;
	int to;
	int hour;
	int minute;
	int duration;
};
void departures (const char airportName[],const char airportCity[],const airport airportData[],const flight flightSched[])
{
	
}
int main()
{
	airport ;
	flight flightList[111];
   printf();
   return 0;
}
