#include <stdio.h>

static int day_tab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

struct simpledate {
  int day;
  int month;
  int year;
};

int day_of_year(struct simpledate *pd) {
  int i, day = 0, leap = (pd->year % 4 == 0 && pd->year % 100 != 0) || (pd->year % 400 == 0);
  for (i = 1; i < pd->month; i++)
    day += day_tab[leap][i];
  return pd->day + day;
}

void dump_date(struct simpledate *pd) {
  printf("%d/%02d/%02d\n", pd->year, pd->month, pd->day); 
}

int main() {
  printf("Playing with structures\n");
  struct simpledate sd;

  sd.year = 2023;
  sd.month = 2;
  sd.day = 11;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));

  sd.year = 2023;
  sd.month = 9;
  sd.day = 15;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));

  sd.year = 2024;
  sd.month = 9;
  sd.day = 15;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));

  sd.year = 2024;
  sd.month = 12;
  sd.day = 15;
  dump_date(&sd);
  printf("Day of year %d\n", day_of_year(&sd));
}
