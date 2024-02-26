#include <stdio.h>
#include <math.h>


int main (){
 int C4 = 60;
 int A4 = 69; 
 double freq_C4 = pow(2, (C4 - 69) / 12.0) * 440;
 double freq_A4 = pow(2, (A4 - 69) / 12.0) * 440;
 printf("The frequency for MIDI Pitch 60 is  %lf hz \n",freq_C4);
 printf("The Frequency for MIDI Pitch 69 is %lf hz \n",freq_A4);
}