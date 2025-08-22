#include <stdio.h>
int main() {
    int length, width, height;
    scanf("%d", &length);
    scanf("%d", &width);
    scanf("%d", &height);
    int surfacearea = 2 * (width * length + length * height + height * width);
    printf("%d\n", surfacearea);
    return 1;
}
