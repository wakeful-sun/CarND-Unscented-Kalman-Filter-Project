#include "sensor.h"
#include "radar_sensor.h"
#include "measurement_package.h"

using Eigen::VectorXd;

RadarSensor::RadarSensor(int stateSize) : Sensor(stateSize)
{

}

VectorXd RadarSensor::ConvertToState(const MeasurementPackage & measurement)
{
	VectorXd state = VectorXd(_stateSize);
	state.fill(0.0);

	state(0) = measurement.raw_measurements_[0] * cos(measurement.raw_measurements_[1]);	// x coordinate
	state(1) = measurement.raw_measurements_[0] * sin(measurement.raw_measurements_[1]);	// y coordinate

	return state;
}

void RadarSensor::Update(const MeasurementPackage& measurement)
{

}