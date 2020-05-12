#include "arduino_mpu.h"
#include <Wire.h>

#ifdef __cplusplus
extern "C" {
#endif

	static uint8_t i2cread(void){
		return Wire.read();
	}

	static void i2cwrite(uint8_t x){
		Wire.write((uint8_t)x);
	}

	int8_t i2c_write(unsigned char slave_addr, unsigned char reg_addr,unsigned char length, unsigned char const *data) {
		//return !I2Cdev::writeBytes(slave_addr,reg_addr,length,(uint8_t *)data);
		Wire.beginTransmission(slave_addr);
		i2cwrite((uint8_t)reg_addr);
		for(int i=0;i<length;i++){
			i2cwrite((uint8_t)*data++);
		}
		Wire.endTransmission();
		return 0;
	}

	int8_t i2c_read(unsigned char slave_addr, unsigned char reg_addr,unsigned char length, unsigned char *data) {
		//return !I2Cdev::readBytes(slave_addr,reg_addr,length,(uint8_t *)data);
		Wire.beginTransmission(slave_addr);
		i2cwrite((uint8_t)reg_addr);
		Wire.endTransmission();
		Wire.requestForm(slave_addr,(uint8_t)length);
		for(int i=0;i<length;i++){
			*data++=i2cread();
		}
		return 0;
	}

#ifdef __cplusplus
}
#endif
