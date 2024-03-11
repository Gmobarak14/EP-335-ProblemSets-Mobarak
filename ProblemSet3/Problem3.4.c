#include <stdio.h>

struct MIDINote {
    int pitch;
    int velocity;
    int channel;
};

void print_note(struct MIDINote note) {
    printf("The MIDI note has pitch %d, velocity %d, and channel %d.\n", note.pitch, note.velocity, note.channel);
}

int main() {

    struct MIDINote note;
    printf("Enter pitch, velocity, and channel separated by spaces: ");
    scanf("%d %d %d", &note.pitch, &note.velocity, &note.channel);

    print_note(note);

    return 0;
}
