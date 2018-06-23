#ifndef FusionUKF_H_
#define FusionUKF_H_

#include "measurement_package.h"

class FusionUKF
{
public:
	FusionUKF();

	void ProcessMeasurement(MeasurementPackage measurement);
private:

};

#endif /* FusionUKF_H_ */
