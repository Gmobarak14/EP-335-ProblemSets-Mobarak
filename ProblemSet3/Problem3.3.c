#include <stdio.h>
#include <math.h>

float midi_to_frequency(int note) {
    return 440.0 * pow(2.0, (note - 69) / 12.0);
}

void frequencies_of_chord(int* chord, int size, float* frequencies) {
    for (int i = 0; i < size; i++) {
        frequencies[i] = midi_to_frequency(chord[i]);
    }
}

int main() {
    int size;
    printf("How many MIDI notes in the chord? ");
    scanf("%d", &size);

    int chord[size];
    float frequencies[size];

    printf("Enter the MIDI notes of the chord separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &chord[i]);
    }

    frequencies_of_chord(chord, size, frequencies);
    for (int i = 0; i < size; i++) {
        printf("The frequency of MIDI note %d is %.2f Hz.\n", chord[i], frequencies[i]);
    }

    return 0;
}
