#include "FusionUKF.h"
#include "measurement_package.h"
#include <iostream>

using Eigen::MatrixXd;
using Eigen::VectorXd;

FusionUKF::FusionUKF()
	: time_stemp(0), ukf(5), lidar_sensor(LidarSensor(5)), radar_sensor(RadarSensor(5))
{

}

void FusionUKF::Initialize(const MeasurementPackage & measurement)
{
	time_stemp = measurement.timestamp_;
	VectorXd initialState;

	switch (measurement.sensor_type_)
	{
	case MeasurementPackage::LASER:
		initialState = lidar_sensor.ConvertToState(measurement);
		break;
	case MeasurementPackage::RADAR:
		initialState = radar_sensor.ConvertToState(measurement);
		break;
	default:
		std::cout << "Not supported sensor detected: sensor type is " << measurement.sensor_type_ << std::endl;
		return;
	}
	
	ukf.Initialize(initialState);
}

void FusionUKF::ProcessMeasurement(const MeasurementPackage& measurement)
{
	std::cout << "Sensor type: " << measurement.sensor_type_ << std::endl;

	if (!ukf.IsInitialized())
	{
		Initialize(measurement);
		return;
	}


	/**
	TODO: Complete this function!

	- Estimate the object's location. Modify the state vector, x_.
	- Predict sigma points, the state, and the state covariance matrix.
	- Use sensor data to update the belief about the object's position.
	- Modify the state vector, x_, and covariance, P_.
	- Calculate the sensor NIS.
	*/
}
