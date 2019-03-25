/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief I2C 从机例程，通过标准接口实现
 *
 * - 操作步骤：
 *   1. PIOB_2 引脚连接 I2C 主机的 SCL 引脚；
 *   2. PIOB_3 引脚连接 I2C 主机的 SDA 引脚。
 *
 * \note
 *    1. 当前 I2C 的 SCL 引脚使用的是 PIOB_2，SDA 引脚使用的是 PIOB_3，
 *       可根据实际情况更换引脚。
 *
 * \par 源代码
 * \snippet demo_am116_core_std_i2c_slave.c src_am116_core_std_i2c_slave
 *
 * \internal
 * \par Modification history
 * - 1.00  17-09-06  vir, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am116_core_std_i2c_slave
 * \copydoc demo_am116_core_std_i2c_slave.c
 */

/** [src_am116_core_std_i2c_slave] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_kl26_inst_init.h"
#include "demo_std_entries.h"

#define __I2C_SLV_ADDR   (0XA0 >> 1)  /**< \brief 从设备的地址 */

/**
 * \brief 例程入口
 */
void demo_amks16z_core_std_i2c_slave_entry (void)
{
    AM_DBG_INFO("demo amks16z_core std smoke i2c slave!\r\n");

    demo_std_i2c_smoke_slave_entry(am_fsl16_i2c0_slv_inst_init(), __I2C_SLV_ADDR);

}
/** [src_am116_core_std_i2c_slave] */

/* end of file */
