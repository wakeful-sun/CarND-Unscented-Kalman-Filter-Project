#include "ukf.h"
#include "sensor.h"
#include <iostream>

using Eigen::MatrixXd;
using Eigen::VectorXd;

UKF::UKF(int stateSize)
	: _stateSize(stateSize), P_(MatrixXd::Identity(stateSize, stateSize))
{
	//x_ = VectorXd(5);   // initial state vector
	//P_ = MatrixXd(5, 5);// initial covariance matrix

	std_a_ = 30;        // Process noise standard deviation longitudinal acceleration in m/s^2
	std_yawdd_ = 30;    // Process noise standard deviation yaw acceleration in rad/s^2
}

bool UKF::IsInitialized()
{
	return isInitialized_;
}

void UKF::Initialize(VectorXd initialState)
{
	if (initialState.size() != _stateSize)
	{
		throw "Configuration error. Initial state vector size is different from UKF state vector size.";
	}
	x_ = initialState;
	isInitialized_ = true;
}

/**
 * Predicts sigma points, the state, and the state covariance matrix.
 * @param {double} delta_t the change in time (in seconds) between the last
 * measurement and this one.
 */
void UKF::Predict(double time_shift)
{

}

/**
* Updates the state and the state covariance matrix using measurement of given sensor.
* @param {MeasurementPackage} meas_package
*/
void UKF::Update(const VectorXd& measurement, Sensor& sensor)
{

}
