#include <stdio.h>

struct MIDINote {
    int pitch;
    int velocity;
    int channel;
};

void print_notes(struct MIDINote notes[], int size) {
    for (int i = 0; i < size; i++) {
        printf("The MIDI note has pitch %d, velocity %d, and channel %d.\n", notes[i].pitch, notes[i].velocity, notes[i].channel);
    }
}

int main() {
    int size;
    printf("How many MIDI notes to enter? ");
    scanf("%d", &size);

    struct MIDINote notes[size];

    printf("Enter MIDI notes (pitch velocity channel): \n");
    for (int i = 0; i < size; i++) {
        scanf("%d %d %d", &notes[i].pitch, &notes[i].velocity, &notes[i].channel);
    }

    print_notes(notes, size);

    return 0;
}
