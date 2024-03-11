#include <stdio.h>
#include <math.h>

float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

void main() {
    int midi_note;
    printf("Enter a MIDI note: ");
    scanf("%d", &midi_note);
    float frequency = midi_to_frequency(midi_note);
    printf("The frequency of MIDI note %d is %.2f Hz.\n", midi_note, frequency);


}
