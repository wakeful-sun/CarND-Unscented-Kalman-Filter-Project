#ifndef LIDAR_SENSOR_PACKAGE_H_
#define LIDAR_SENSOR_PACKAGE_H_

#include "sensor.h"
#include "measurement_package.h"

class RadarSensor : public Sensor {
protected:
	//DO NOT MODIFY measurement noise values above these are provided by the sensor manufacturer.
	double std_radr_ = 0.3;    // Radar measurement noise standard deviation radius in m
	double std_radphi_ = 0.03; // Radar measurement noise standard deviation angle in rad
	double std_radrd_ = 0.3;   // Radar measurement noise standard deviation radius change in m/s

public:
	RadarSensor();
	void Update(const MeasurementPackage& measurement) override;
};

#endif /* LIDAR_SENSOR_PACKAGE_H_ */
