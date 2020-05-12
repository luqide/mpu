#include "mgos_arduino_mpu.h"

int8_t mgos_mpu_init(struct int_param_s* int_param){
	return mpu_init(int_param);
}

int8_t mgos_mpu_lp_accel_mode(uint8_t rate){
	return mpu_lp_accel_mode(rate);
}

int8_t mgos_mpu_get_gyro_reg(int16_t* data,uint64_t* timestamp){
	return mpu_get_gyro_reg(data,timestamp);
}

int8_t mgos_mpu_get_accel_reg(int16_t* data,uint64_t* timestamp){
	return mpu_get_accel_reg(data,timestamp);
}

int8_t mgos_mpu_get_temperature(int64_t* data,uint64_t* timestamp){
	return mpu_get_temperature(data,timestamp);
}

int8_t mgos_mpu_read_6500_accel_bias(int64_t* accel_bias){
	return mpu_read_6500_accel_bias(accel_bias);
}

int8_t mgos_mpu_read_6050_accel_bias(int64_t* accel_bias){
	return mpu_read_6050_accel_bias(accel_bias);
}

int8_t mgos_mpu_read_gyro_bias(int64_t* gyro_bias){
	return mpu_read_gyro_bias(gyro_bias);
}

int8_t mgos_mpu_set_gyro_bias_reg(int64_t* gyro_bias){
	return mpu_set_gyro_bias_reg(gyro_bias);
}

int8_t mgos_mpu_set_accel_bias_6050_reg(const int64_t* accel_bias){
	return mpu_set_accel_bias_6050_reg(accel_bias);
}

int8_t mgos_mpu_set_accel_bias_6500_reg(const int64_t* accel_bias){
	return mpu_set_accel_bias_6500_reg(accel_bias);
}

int8_t mgos_mpu_reset_fifo(void){
	return mpu_reset_fifo();
}

int8_t mgos_mpu_get_gyro_fsr(uint16_t* fsr){
	return mpu_get_gyro_fsr(fsr);
}

int8_t mgos_mpu_set_gyro_fsr(uint16_t fsr){
	return mpu_set_gyro_fsr(fsr);
}

int8_t mgos_mpu_get_accel_fsr(uint16_t* fsr){
	return mpu_get_accel_fsr(fsr);
}

int8_t mgos_mpu_set_accel_fsr(uint16_t fsr){
	return mpu_set_accel_fsr(fsr);
}

int8_t mgos_mpu_get_lpf(uint16_t* lpf){
	return mpu_get_lpf(lpf);
}

int8_t mgos_mpu_set_lpf(uint16_t lpf){
	return mpu_set_lpf(lpf);
}

int8_t mgos_mpu_get_sample_rate(uint16_t* rate){
	return mpu_get_sample_rate(rate);
}

int8_t mgos_mpu_set_sample_rate(uint16_t rate){
	return mpu_set_sample_rate(rate);
}

int8_t mgos_mpu_get_compass_sample_rate(uint16_t* rate){
	return mpu_get_compass_sample_rate(rate);
}

int8_t mgos_mpu_set_compass_sample_rate(uint16_t rate){
	return mpu_set_compass_sample_rate(rate);
}

int8_t mgos_mpu_get_gyro_sens(float* sens){
	return mpu_get_gyro_sens(sens);
}

int8_t mgos_mpu_get_accel_sens(uint16_t* sens){
	return mpu_get_accel_sens(sens);
}

int8_t mgos_mpu_get_fifo_config(uint8_t* sensors){
	return mpu_get_fifo_config(sensors);
}

int8_t mgos_mpu_configure_fifo(uint8_t sensors){
	return mpu_configure_fifo(sensors);
}

int8_t mgos_mpu_get_power_state(uint8_t* power_on){
	return mpu_get_power_state(power_on);
}

int8_t mgos_mpu_set_sensors(uint8_t sensors){
	return mpu_set_sensors(sensors);
}

int8_t mgos_mpu_get_int_status(int16_t* status){
	return mpu_get_int_status(status);
}

int8_t mgos_mpu_read_fifo(int16_t* gyro,int16_t* accel,uint64_t* timestamp,uint8_t* sensors,uint8_t* more){
	return mpu_read_fifo(gyro,accel,timestamp,sensors,more);
}

int8_t mgos_mpu_read_fifo_stream(uint8_t length,uint8_t* data,uint8_t* more){
	return mpu_read_fifo_stream(length,data,more);
}

int8_t mgos_mpu_set_bypass(uint8_t bypass_on){
	return mpu_set_bypass(bypass_on);
}

int8_t mgos_mpu_set_int_level(uint8_t active_low){
	return mpu_set_int_level(active_low);
}

int8_t mgos_mpu_set_int_latched(uint8_t enable){
	return mpu_set_int_latched(enable);
}

