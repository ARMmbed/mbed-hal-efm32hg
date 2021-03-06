/***************************************************************************//**
 * @file PeripheralPins.c
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2014-2015 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#include "PeripheralPins.h"

/************ADC***************/
const PinMap PinMap_ADC[] = {
    {PD4, ADC_0, ADC_SINGLECTRL_INPUTSEL_CH4},
    {PD5, ADC_0, ADC_SINGLECTRL_INPUTSEL_CH5},
    {PD6, ADC_0, ADC_SINGLECTRL_INPUTSEL_CH6},
    {PD7, ADC_0, ADC_SINGLECTRL_INPUTSEL_CH7},
    {NC  , NC   , NC}
};

/************I2C SCL***********/
const PinMap PinMap_I2C_SCL[] = {
    /* I2C0 */
    {PA1,  I2C_0, 0},
    {PD7,  I2C_0, 1},
    {PC1,  I2C_0, 4},
    {PF1,  I2C_0, 5},
    {PE13, I2C_0, 6},

    /* Not connected */
    {NC  , NC   , NC}
};

/************I2C SDA***********/
const PinMap PinMap_I2C_SDA[] = {
    /* I2C0 */
    {PA0,  I2C_0, 0},
    {PD6,  I2C_0, 1},
    {PC0,  I2C_0, 4},
    {PF0,  I2C_0, 5},
    {PE12, I2C_0, 6},

    /* Not connected */
    {NC  , NC   , NC}
};
/************PWM***************/
const PinMap PinMap_PWM[] = {
    {PA0, PWM_CH0, 0},
    {PA1, PWM_CH1, 0},
    {PA2, PWM_CH2, 0},
    {PF0, PWM_CH0, 5},
    {PF1, PWM_CH1, 5},
    {PF2, PWM_CH2, 5},
    {NC  , NC   , NC}
};

/*************SPI**************/
const PinMap PinMap_SPI_MOSI[] = {
    /* USART0 */
    {PE10, SPI_0, 0},
    //{NC, SPI_0, 2},     /* SPI_0 loc2 is not bonded */
    {PE13, SPI_0, 3},
    {PB7,  SPI_0, 4},

    /* USART1 */
    {PC0,  SPI_1, 0},
    {PD7,  SPI_1, 3},
    {PF2,  SPI_1, 4},

    /* Not connected */
    {NC  , NC   , NC}
};

const PinMap PinMap_SPI_MISO[] = {
    /* USART0 */
    {PE11, SPI_0, 0},
    {PC10, SPI_0, 2},
    {PE12, SPI_0, 3},
    {PB8,  SPI_0, 4},

    /* USART1 */
    {PC1,  SPI_1, 0},
    {PD6,  SPI_1, 3},
    {PA0,  SPI_1, 4},

    /* Not connected */
    {NC  , NC   , NC}
};

const PinMap PinMap_SPI_CLK[] = {
    /* USART0 */
    {PE12, SPI_0, 0},
    {PC9,  SPI_0, 2},
    //{PC15, SPI_0, 3},     /* Conflict with SPI_0 loc4 */
    {PB13, SPI_0, 4},

    /* USART1 */
    {PB7,  SPI_1, 0},
    {PC15, SPI_1, 3},
    {PB11, SPI_1, 4},

    /* Not connected */
    {NC  , NC   , NC}
};

const PinMap PinMap_SPI_CS[] = {
    /* USART0 */
    {PE13, SPI_0, 0},
    {PC8,  SPI_0, 2},
    //{PC14, SPI_0, 3},     /* Conflict with SPI_1 loc3 */
    {PB14, SPI_0, 4},

    /* USART1 */
    {PB8,  SPI_1, 0},
    {PC14, SPI_1, 3},

    /* Not connected */
    {NC  , NC   , NC}
};

/************UART**************/
const PinMap PinMap_UART_TX[] = {
    /* USART0 */
    {PE10, USART_0, 0},
    //{NC, USART_0, 2},     /* USART_0 loc2 is not bonded */
    {PE13, USART_0, 3},
    {PB7,  USART_0, 4},

    /* USART1 */
    {PC0,  USART_1, 0},
    {PD7,  USART_1, 3},
    {PF2,  USART_1, 4},

    /* LEUART0 */
    {PD4,  LEUART_0, 0},
    {PB13, LEUART_0, 1},
    {PF0,  LEUART_0, 3},
    {PC14, LEUART_0, 5},

    /* Not connected */
    {NC  , NC   , NC}
};

const PinMap PinMap_UART_RX[] = {
    /* USART0 */
    {PE11, USART_0, 0},
    //{PC10, USART_0, 2},
    {PE12, USART_0, 3},
    {PB8,  USART_0, 4},

    /* USART1 */
    {PC1,  USART_1, 0},
    {PD6,  USART_1, 3},
    {PA0,  USART_1, 4},

    /* LEUART0 */
    {PD5,  LEUART_0, 0},
    {PB14, LEUART_0, 1},
    {PF1,  LEUART_0, 3},
    {PC15, LEUART_0, 5},

    /* Not connected */
    {NC  , NC   , NC}
};
