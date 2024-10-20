#include <stdio.h>

struct box {
    int width;
    int height;
    int depth;
    int area;
    int volume;
};

struct box getBoxDimensions() {
    struct box b;

    printf("Dose to mikos tou koutiou se cm: ");
    scanf("%d", &b.width);
    printf("Dose to ypsos tou koutiou se cm: ");
    scanf("%d", &b.height);
    printf("Dose to vathos tou koutiou se cm: ");
    scanf("%d", &b.depth);
    return b;
}

void calc_box_area(struct box *a_box) {
    a_box->area = 2*(a_box->width*a_box->height + a_box->width*a_box->depth + a_box->height*a_box->depth);
}

void calc_box_volume(struct box *a_box) {
    a_box->volume = a_box->width*a_box->height*a_box->depth;
}

int main() {
    struct box b = getBoxDimensions();
    calc_box_area(&b);
    calc_box_volume(&b);
    printf("To emvadon tou koutiou einai %d cm2\n", b.area);
    printf("O ogos tou koutiou einai %d cm3\n", b.volume);
    return 0;
}

