#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_

/**
* @brief UART Message sending frequency in Hz.
* @note Maximum frequency is 4500Hz when baud rate is 921600 (default).
*/
const uint32_t UART_SEND_FREQUENCY_HZ = 4500u;

/**
* @brief Periodic sampling frequency in Hz of analog signals using an ADC.
*/
const uint32_t ADC_SAMPLING_FREQUENCY_HZ = 5000u;

#endif /* INC_CONFIG_H_ */
