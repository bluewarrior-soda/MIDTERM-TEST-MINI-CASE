#include <stdio.h>
#include <stdlib.h>
#include "models.cpp"
#include "controllers.cpp"

void main_menu (struct patient p)
{
    int total_patients, total_cure;
    scanf("%d %d", &total_patients, &total_cure);

    for (int i = 1; i <= total_patients; i++)
    {
        scanf("%d %s %d - %s", &p.date, p.mon, &p.year, p.name);
    }
}

int main()
{
    main_menu(struct patient p);

    return 0;
}