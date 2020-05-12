
#include "arduino_mpu.h"
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h"

#ifdef __cplusplus
extern "C"
{
#endif
int8_t mgos_mpu_init(struct int_param_s* int_param);
int8_t mgos_mpu_lp_accel_mode(uint8_t rate);
int8_t mgos_mpu_get_gyro_reg(int16_t* data,uint64_t* timestamp);
int8_t mgos_mpu_get_accel_reg(int16_t* data,uint64_t* timestamp);
int8_t mgos_mpu_get_temperature(int64_t* data,uint64_t* timestamp);
int8_t mgos_mpu_read_6500_accel_bias(int64_t* accel_bias);
int8_t mgos_mpu_read_6050_accel_bias(int64_t* accel_bias);
int8_t mgos_mpu_read_gyro_bias(int64_t* gyro_bias);
int8_t mgos_mpu_set_gyro_bias_reg(int64_t* gyro_bias);
int8_t mgos_mpu_set_accel_bias_6050_reg(const int64_t* accel_bias);
int8_t mgos_mpu_set_accel_bias_6500_reg(const int64_t* accel_bias);
int8_t mgos_mpu_reset_fifo(void);
int8_t mgos_mpu_get_gyro_fsr(uint16_t* fsr);
int8_t mgos_mpu_set_gyro_fsr(uint16_t fsr);
int8_t mgos_mpu_get_accel_fsr(uint16_t* fsr);
int8_t mgos_mpu_set_accel_fsr(uint16_t fsr);
int8_t mgos_mpu_get_lpf(uint16_t* lpf);
int8_t mgos_mpu_set_lpf(uint16_t lpf);
int8_t mgos_mpu_get_sample_rate(uint16_t* rate);
int8_t mgos_mpu_set_sample_rate(uint16_t rate);
int8_t mgos_mpu_get_compass_sample_rate(uint16_t* rate);
int8_t mgos_mpu_set_compass_sample_rate(uint16_t rate);
int8_t mgos_mpu_get_gyro_sens(float* sens);
int8_t mgos_mpu_get_accel_sens(uint16_t* sens);
int8_t mgos_mpu_get_fifo_config(uint8_t* sensors);
int8_t mgos_mpu_configure_fifo(uint8_t sensors);
int8_t mgos_mpu_get_power_state(uint8_t* power_on);
int8_t mgos_mpu_set_sensors(uint8_t sensors);
int8_t mgos_mpu_get_int_status(int16_t* status);
int8_t mgos_mpu_read_fifo(int16_t* gyro,int16_t* accel,uint64_t* timestamp,uint8_t* sensors,uint8_t* more);
int8_t mgos_mpu_read_fifo_stream(uint8_t length,uint8_t* data,uint8_t* more);
int8_t mgos_mpu_set_bypass(uint8_t bypass_on);
int8_t mgos_mpu_set_int_level(uint8_t active_low);
int8_t mgos_mpu_set_int_latched(uint8_t enable)
#ifdef __cplusplus
}
#endif