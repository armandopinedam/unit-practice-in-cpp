#include "SpeedMonitor.h"
#include "ConsoleLogger.h"

int main(){
  ConsoleLogger consoleLogger;
  SpeedMonitor instance {10, consoleLogger};
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
}
