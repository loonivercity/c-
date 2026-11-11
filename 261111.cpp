//#include <stdio.h>
//int main(void) {
//    int outer, inter;
//
//    for (outer = 0; outer < 4; outer++) {
//        for (inter = 0; inter < 4 - outer; inter++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int outer, inter;
//
//    for (outer = 0; outer < 4; outer++) {
//        
//        for (inter = 0; inter < 3 - outer; inter++) {
//            printf(" ");
//        }
//        for (inter = 0; inter < 2 * outer + 1; inter++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    int outer, inter;
//    for (outer = 0; outer < 3; outer++) {
//        for (inter = 0; inter < 2 - outer; inter++) {
//            printf(" ");
//        }
//        for (inter = 0; inter < 2 * outer + 1; inter++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (outer = 0; outer < 3; outer++) {
//        for (inter = 0; inter < outer; inter++) {
//            printf(" ");
//        }
//        for (inter = 0; inter < 5 - 2 * outer; inter++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

#include <stdio.h>

int main(void) {
    int outer, inter;

    for (outer = 1; outer <= 4; outer++) {
        for (inter = 0; inter < outer; inter++) {
            printf("%d", outer);
        }
        printf("\n");
    }

    return 0;
}