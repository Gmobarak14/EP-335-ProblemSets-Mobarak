#include <stdio.h>

int main() {
  
    char *intervals[] = {"unison", "minor second", "major second", "minor third", "major third",
                         "perfect fourth", "tritone", "perfect fifth", "minor sixth", 
                         "major sixth", "minor seventh", "major seventh"};

  
    for (int note1 = 0; note1 < 12; note1++) {
        
        for (int note2 = 0; note2 < 12; note2++) {
            
            int interval = (note2 - note1 + 12) % 12;

           
            printf("The interval from note %d to note %d is a ", note1, note2);
            switch (interval) {
                case 0:
                    printf("%s.\n", intervals[0]);
                    break;
                case 1:
                    printf("%s.\n", intervals[1]);
                    break;
                case 2:
                    printf("%s.\n", intervals[2]);
                    break;
                case 3:
                    printf("%s.\n", intervals[3]);
                    break;
                case 4:
                    printf("%s.\n", intervals[4]);
                    break;
                case 5:
                    printf("%s.\n", intervals[5]);
                    break;
                case 6:
                    printf("%s.\n", intervals[6]);
                    break;
                case 7:
                    printf("%s.\n", intervals[7]);
                    break;
                case 8:
                    printf("%s.\n", intervals[8]);
                    break;
                case 9:
                    printf("%s.\n", intervals[9]);
                    break;
                case 10:
                    printf("%s.\n", intervals[10]);
                    break;
                case 11:
                    printf("%s.\n", intervals[11]);
                    break;
            }
        }
        printf("\n"); 
    }

    return 0;
}
