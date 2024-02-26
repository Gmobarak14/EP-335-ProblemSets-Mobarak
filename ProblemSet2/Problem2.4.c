#include <stdio.h>
#include <math.h>
int main (){
 int pitch;
 printf("Enter a MIDI value: \n");
 scanf("%d",&pitch);
 if(pitch<=127 && pitch >=0 ){
    int octave = pitch / 12 - 1; 
    int note = pitch % 12;
    char *letter; 
    switch(note){
        case 0: 
        letter = 'C';
        case 1: 
        letter = 'C#';
        case 2:
        letter = 'D';
        case 3:
        letter = 'D#';
        case 4: 
        letter = 'E';
        case 5:
        letter = 'F';
        case 6:
        letter = 'F#';
        case 7:
        letter = 'G';
        case 8:
        letter = 'G#';
        case 9:
        letter = 'A';
        case 10: 
        letter = 'A#';
        case 11:
        letter = 'B';
    }
 printf("The MIDI pitch of %d is %s %d \n ",pitch, letter, octave );
 
 }
 else{
    printf("Invalid MIDI pitch. It should be between 0 and 127\n");
 }

}