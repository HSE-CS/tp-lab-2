//
// Created by toliman on 08.11.2020.
//

#include "../include/task1.h"

template<typename T>
void print(T t) {
    std::cout << t << std::endl;
}

template<typename T>
void print(T *array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
}

signed main() {
    int array[7]{34, 324, 23, 29384, 2634, 904440, 182828};
    // int array[7]{1, 2, 3, 4, 5, 6, 7};
//    double numbers[6]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
//    char TheRubberBandMan[14]{
//            (char *) "Hand me down my walkin cane\n",
//            (char *) "Hand me down my hat\n",
//            (char *) "Hurry now and dont be late\n",
//            (char *) "Cause we aint got time to chat\n",
//            (char *) "You and me were goin out\n",
//            (char *) "To catch the latest sound\n",
//            (char *) "Guaranteed to blow your mind\n",
//            (char *) "So high you wont come down\n",
//            (char *) "Hey yall prepare yourself for the rubberband man\n",
//            (char *) "Youve never heard a sound\n",
//            (char *) "Like the rubberband man\n",
//            (char *) "Youre bound to lose control\n",
//            reinterpret_cast<char>((char *) "When the rubberband starts to jam")},
//    };
//
    msort(array, 7);
    print(array, 7);
//
//    msort(TheRubberBandMan, 13);
//    //print(TheRubberBandMan[7]);
//    print(TheRubberBandMan[0]);
////    print(TheRubberBandMan[1]);
//
////    print(TheRubberBandMan[2]);
////    print(TheRubberBandMan[3]);
//    print(TheRubberBandMan[4]);
//    print(TheRubberBandMan[5]);
//    print(TheRubberBandMan[6]);
//    print(TheRubberBandMan[7]);
//    print(TheRubberBandMan[8]);
//    print(TheRubberBandMan[9]);
//    print(TheRubberBandMan[10]);
//    print(TheRubberBandMan[11]);
//    print(TheRubberBandMan[12]);



    //msort(numbers, 5);

    //for (double number : numbers) { std::cout << number << ' '; }
    //  print(numbers, 5);
//    std::string a = "wow", b = "nice", c(TheRubberBandMan[0]);
//    std::cout << (a.length() < b.length() && b > c);

    // print(sizeof((TheRubberBandMan)[5]));

    // msort(TheRubberBandMan, 13);



    return 0;
}
