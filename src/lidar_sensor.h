#ifndef LIDAR_SENSOR_PACKAGE_H_
#define LIDAR_SENSOR_PACKAGE_H_

#include "sensor.h"

class LidarSensor : public Sensor
{
protected:
	//DO NOT MODIFY measurement noise values above these are provided by the sensor manufacturer.
	double std_laspx_ = 0.15;  // Laser measurement noise standard deviation position1 in m
	double std_laspy_ = 0.15;  // Laser measurement noise standard deviation position2 in m

public:
	LidarSensor(int stateSize);
	Eigen::VectorXd ConvertToState(const MeasurementPackage& measurement) override;
	void Update(const MeasurementPackage& measurement) override;
};

#endif /* LIDAR_SENSOR_PACKAGE_H_ */
