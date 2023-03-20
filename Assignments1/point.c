#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    void (*move)(void *self, int dx, int dy);
} Point;

void movePoint(void *self, int dx, int dy) {
    Point *p = (Point *)self;
    p->x += dx;
    p->y += dy;
}

Point *createPoint(int x, int y) {
    Point *p = (Point *)malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    p->move = &movePoint;
    return p;
}

int main() {
    Point *p = createPoint(0, 0);
    printf("Point: (%d, %d)\n", p->x, p->y);
    p->move(p, 5, 10);
    printf("Point: (%d, %d)\n", p->x, p->y);
    free(p);
    return 0;
}

