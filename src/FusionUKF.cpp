#include "FusionUKF.h"
#include "measurement_package.h"
#include <iostream>


FusionUKF::FusionUKF()
{

}

void FusionUKF::ProcessMeasurement(MeasurementPackage measurement)
{
	std::cout << "Sensor type: " << measurement.sensor_type_ << std::endl;
}
