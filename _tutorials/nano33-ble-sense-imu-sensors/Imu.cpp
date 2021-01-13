#include "Imu.h"

bool initIMU() {
  return IMU.begin();
}

bool getAcceleration(float& x, float& y, float& z) {
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);

    return true;
  }

  return false;
}
