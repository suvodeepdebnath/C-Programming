//
// cpp program to represent the state of the LEDs
//
//  
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, r, g, b, i, rVal = 1, gVal = 2, bVal = 4, value;
	int count[8];
	
	// get the input of total time,time periods of color R, G, B respectively
	cin >> t >> r >> g >> b;
	
	memset(count, 0, sizeof(int) * 8);	// initialize 0 t0 all count
	
	for(i = 0;i < t;i++)
	{
		// change the state of the red LED
		if(i % r == 0)
			rVal = rVal ? 0 : 1;
		// change the state of the green LED
		if(i % g == 0)
			gVal = gVal ? 0 : 2;
		// change the state of the blue LEDs
		if(i % b == 0)
			bVal = bVal ? 0 : 4;
			
		value = rVal + gVal + bVal;
		switch(value)
		{
			case 0: count[7]++; // if the value = 0, all leds are off, then it is black and increase the count 
					break;
			case 1: count[0]++; // when only red is on
					break;
			case 2: count[1]++; // when only green is on
					break;
			case 3: count[3]++; // Yellow 
					break;
			case 4: count[2]++; // when only blue is on
					break;
			case 5: count[5]++; // magenta
					break;
			case 6: count[4]++; // cyan
					break;
			case 7: count[6]++; // white when red, green, blue all are on
					break;
		}
	}
	for(i = 0;i < 8;i++)
		printf("%d ",count[i]);
	return 0;
}
