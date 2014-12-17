#include <stdio.h>
#include <time.h>

/**
 * Show current local time
 * @return none
 */
void showCurrentLocalTime() {
  // Get curret time
  time_t currentTime = time(NULL);
  // Convert to local time
  struct tm* localCurrentTime = localtime(&currentTime);

  // Show current local time
  printf("Current local time is %4d/%02d/%02d %02d:%02d:%02d\n",
         localCurrentTime->tm_year + 1900,
         localCurrentTime->tm_mon + 1,
         localCurrentTime->tm_mday,
         localCurrentTime->tm_hour,
         localCurrentTime->tm_min,
         localCurrentTime->tm_sec);
  return;
}

int main(void) {
  // Show current local time
  showCurrentLocalTime();
  return 0;
}
