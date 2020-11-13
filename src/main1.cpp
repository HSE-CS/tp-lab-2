//
// Created by toliman on 08.11.2020.
//

#include "../include/task1.h"


signed main() {
    int array[7]{34, 324, 23, 29384, 2634, 904440, 182828};
    double numbers[6]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    char **TheRubberBandMan = new char *[13]{
            (char *) "Hand me down my walkin cane\n",
            (char *) "Hand me down my hat\n",
            (char *) "Hurry now and dont be late\n",
            (char *) "Cause we aint got time to chat\n",
            (char *) "You and me were goin out\n",
            (char *) "To catch the latest sound\n",
            (char *) "Guaranteed to blow your mind\n",
            (char *) "So high you wont come down\n",
            (char *) "Hey yall prepare yourself for the rubberband man\n",
            (char *) "Youve never heard a sound\n",
            (char *) "Like the rubberband man\n",
            (char *) "Youre bound to lose control\n",
            (char *) "When the rubberband starts to jam",
    };

    msort(array, 7);
    // print(array, 7);

    msort(numbers, 5);

    for (int i = 0; i < 6; ++i) { std::cout << numbers[i] << ' '; }
    //  print(numbers, 5);


    // msort(TheRubberBandMan, 13);


    return 0;
}
