#ifndef UKF_H
#define UKF_H

#include "measurement_package.h"
#include "sensor.h"
#include "Eigen/Dense"

class UKF {
private:
	bool isInitialized_;
	int _stateSize;

public:
	Eigen::VectorXd x_;			// state vector: [pos1 pos2 vel_abs yaw_angle yaw_rate] in SI units and rad
	Eigen::MatrixXd P_;			// state covariance matrix
	Eigen::MatrixXd Xsig_pred_; // predicted sigma points matrix

	double std_a_;				// Process noise standard deviation longitudinal acceleration in m/s^2
	double std_yawdd_;			// Process noise standard deviation yaw acceleration in rad/s^2

	Eigen::VectorXd weights_;	// Weights of sigma points

	int n_x_;					// State dimension
	int n_aug_;					// Augmented state dimension

	double lambda_;				// Sigma point spreading parameter

	UKF(int stateSize);

	bool IsInitialized();
	void Initialize(Eigen::VectorXd initialState);

	void Predict(double time_shift);
	void Update(const Eigen::VectorXd& measurement, Sensor& sensor);
};

#endif /* UKF_H */
