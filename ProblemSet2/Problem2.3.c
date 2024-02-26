#include <stdio.h>
#include <math.h>
int main (){
 int pitch; 
 printf("Enter a MIDI value: \n");
 scanf("%d",&pitch);
 if(pitch<=127 && pitch >=0 ){
    int octave = pitch / 12 - 1; 
    printf("The Octave for MIDI pitch %d is %d\n", pitch, octave);
 }
 else{
    printf("Invalid MIDI pitch. It should be between 0 and 127\n");
 }

}