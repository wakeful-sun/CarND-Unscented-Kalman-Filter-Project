#include "lidar_sensor.h"

using Eigen::VectorXd;

LidarSensor::LidarSensor(int stateSize) : Sensor(stateSize)
{

}

VectorXd LidarSensor::ConvertToState(const MeasurementPackage & measurement)
{
	VectorXd state = VectorXd(_stateSize);
	state.fill(0.0);

	state(0) = measurement.raw_measurements_[0];	// x coordinate
	state(1) = measurement.raw_measurements_[1];	// y coordinate

	return state;
}

void LidarSensor::Update(const MeasurementPackage& measurement) {

}