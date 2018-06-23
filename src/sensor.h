#ifndef SENSOR_PACKAGE_H_
#define SENSOR_PACKAGE_H_

#include "measurement_package.h"
#include "Eigen\Dense"

class Sensor {
protected:
	int _stateSize;

public:
	Sensor(int stateSize);
	virtual Eigen::VectorXd ConvertToState(const MeasurementPackage& measurement) = 0;
	virtual void Update(const MeasurementPackage& measurement) = 0;
};

#endif /* SENSOR_PACKAGE_H_ */
