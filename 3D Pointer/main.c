#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
    int z;
}Pointer;

double EuclideanDistance(Pointer p1, Pointer p2) {
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2)+pow(p2.z-p1.z,2));
}

int main() {
    Pointer p1, p2;
    double distance;

    printf("Enter 3D Points(x1, y1, z1): ");
    scanf("%d%d%d", &p1.x, &p1.y, &p1.z);
    printf("Enter 3D Points(x2, y2, z2): ");
    scanf("%d%d%d", &p2.x, &p2.y, &p2.z);

    distance = EuclideanDistance(p1, p2);
    printf("Distance between p1 and p2 : %lf\n", distance);

    return 0;
}
