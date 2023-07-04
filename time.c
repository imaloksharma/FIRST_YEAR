#include <stdio.h>

struct Time {
  int hours;
  int minutes;
  char am_pm[3];
};

void get_time(struct Time *time) {
  printf("Enter the time in 12-hour clock format (hh:mm AM/PM): ");
  scanf("%d:%d %s", &time->hours, &time->minutes, time->am_pm);
}

int get_time_in_minutes(struct Time time) {
  int minutes = time.hours * 60 + time.minutes;
  if (strcmp(time.am_pm, "PM") == 0) {
    minutes -= 12 * 60;
  }
  return minutes;
}

int main() {
  struct Time start_time, end_time;

  get_time(&start_time);
  get_time(&end_time);

  int start_time_in_minutes = get_time_in_minutes(start_time);
  int end_time_in_minutes = get_time_in_minutes(end_time);

  int time_elapsed_in_minutes = end_time_in_minutes - start_time_in_minutes;

  int hours = time_elapsed_in_minutes / 60;
  int minutes = time_elapsed_in_minutes % 60;

  printf("The time elapsed between the two times is %d hours and %d minutes.\n", hours, minutes);

  return 0;
}