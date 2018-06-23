#ifndef SENSOR_PACKAGE_H_
#define SENSOR_PACKAGE_H_

#include "measurement_package.h"

class Sensor {

public:
	Sensor();
	virtual void Update(const MeasurementPackage& measurement) = 0;
};

#endif /* SENSOR_PACKAGE_H_ */
