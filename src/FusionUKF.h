#ifndef FusionUKF_H_
#define FusionUKF_H_

#include "ukf.h"
#include "lidar_sensor.h"
#include "radar_sensor.h"

class FusionUKF
{
private:
	long long time_stemp;		// time when the state is true, in us
	UKF ukf;
	LidarSensor lidar_sensor;
	RadarSensor radar_sensor;
	void Initialize(const MeasurementPackage& measurement);

public:
	FusionUKF();
	void ProcessMeasurement(const MeasurementPackage& measurement);
};

#endif /* FusionUKF_H_ */
