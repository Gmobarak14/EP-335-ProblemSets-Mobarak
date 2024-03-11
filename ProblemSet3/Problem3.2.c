#include <stdio.h>
#include <math.h>

float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

void print_chord_freq(int chord[], int size) {
    for (int i = 0; i < size; i++) {
        float frequency = midi_to_frequency(chord[i]);
        printf("The frequency of MIDI note %d is %.2f Hz.\n", chord[i], frequency);
    }
}

int main() {
    int size;
    printf("How many MIDI notes in the chord? ");
    scanf("%d", &size);

    int chord[size];
    printf("Enter the MIDI notes of the chord separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &chord[i]);
    }

    print_chord_freq(chord, size);

    return 0;
}
