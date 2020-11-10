//
// Created by toliman on 08.11.2020.
//

#include "task1.h"


signed main() {
    int array[13]{34, 324, 23, 29384, 2634, 904440, 182828};
    double numbers[5]{34.2342, 980348.0293, 99399.2737423, .66663663, 78732.992348283};
    char TheRubberBandMan[20][100] = {
            "Hand me down my walkin' cane\n",
            "Hand me down my hat\n",
            "Hurry now and don't be late\n",
            "'Cause we ain't got time to chat\n",
            "You and me we're goin' out\n",
            "To catch the latest sound\n",
            "Guaranteed to blow your mind\n",
            "So high you won't come down\n",
            "Hey ya'll prepare yourself for the rubberband man\n",
            "You've never heard a sound\n",
            "Like the rubberband man\n",
            "You're bound to lose control\n",
            "When the rubberband starts to jam",
    };

    msort(array, 13);
//    print(array);

    return 0;
}
