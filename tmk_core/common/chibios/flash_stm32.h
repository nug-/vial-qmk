/*
 * This software is experimental and a work in progress.
 * Under no circumstances should these files be used in relation to any critical system(s).
 * Use of these files is at your own risk.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This files are free to use from https://github.com/rogerclarkmelbourne/Arduino_STM32 and
 * https://github.com/leaflabs/libmaple
 *
 * Modifications for QMK and STM32F303 by Yiancar
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#if defined(EEPROM_EMU_STM32F303xC)
#    define STM32F303xC
#    include "stm32f3xx.h"
#elif defined(EEPROM_EMU_STM32F103xB)
#    define STM32F103xB
#    include "stm32f1xx.h"
#elif defined(EEPROM_EMU_STM32F072xB)
#    define STM32F072xB
#    include "stm32f0xx.h"
#elif defined(EEPROM_EMU_STM32F042x6)
#    define STM32F042x6
#    include "stm32f0xx.h"
#elif defined(EEPROM_EMU_STM32F411xC) || defined(EEPROM_EMU_STM32F411xE)
#    define EEPROM_EMU_STM32F4
#    define STM32F411xE
#    include "stm32f4xx.h"
#else
#    error "not implemented."
#endif

#include <ch.h>
#include <hal.h>

typedef enum { FLASH_BUSY = 1, FLASH_ERROR_PG, FLASH_ERROR_WRP, FLASH_ERROR_OPT, FLASH_COMPLETE, FLASH_TIMEOUT, FLASH_BAD_ADDRESS } FLASH_Status;

#define IS_FLASH_ADDRESS(ADDRESS) (((ADDRESS) >= 0x08000000) && ((ADDRESS) < 0x0807FFFF))

FLASH_Status FLASH_WaitForLastOperation(uint32_t Timeout);
FLASH_Status FLASH_ErasePage(uint32_t Page_Address);
FLASH_Status FLASH_ProgramHalfWord(uint32_t Address, uint16_t Data);

void FLASH_Unlock(void);
void FLASH_Lock(void);
void FLASH_ClearFlag(uint32_t FLASH_FLAG);

#ifdef __cplusplus
}
#endif
