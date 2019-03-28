/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <lukasz.stempien@gmail.com> wrote this file. As long as you retain this
 * notice you can do whatever you want with this stuff. If we meet some day,
 * and you think this stuff is worth it, you can buy me a beer in return.
 *                                                              Lukasz Stempien
 * ----------------------------------------------------------------------------
 */
#ifndef __ACC_MAG_LSM303D_PRIV_H__
#define __ACC_MAG_LSM303D_PRIV_H__

#define DEV_ADDR_SDO_SA0_PIN_HIGH   (0x3A)
#define DEV_ADDR_SDO_SA0_PIN_LOW    (0x3C)

// Linear acceleration sensitivity
#define LA_SO_2G_VAL            (0.061)
#define LA_SO_4G_VAL            (0.122)
#define LA_SO_6G_VAL            (0.183)
#define LA_SO_8G_VAL            (0.244)
#define LA_SO_16G_VAL           (0.732)

#define LSM303D_CHIP_ID         (0x49)

#define TEMP_OUT_L              (0x05)
#define TEMP_OUT_H              (0x06)

#define STATUS_M                (0x07)

#define OUT_X_L_M               (0x08)
#define OUT_X_H_M               (0x09)
#define OUT_Y_L_M               (0x0A)
#define OUT_Y_H_M               (0x0B)
#define OUT_Z_L_M               (0x0C)
#define OUT_Z_H_M               (0x0D)

#define WHO_AM_I                (0x0F)

#define INT_CTRL_M              (0x12)
#define INT_SRC_M               (0x13)
#define INT_THS_L_M             (0x14)
#define INT_THS_H_M             (0x15)

#define OFFSET_X_L_M            (0x16)
#define OFFSET_X_H_M            (0x17)
#define OFFSET_Y_L_M            (0x18)
#define OFFSET_Y_H_M            (0x19)
#define OFFSET_Z_L_M            (0x1A)
#define OFFSET_Z_H_M            (0x1B)

#define REFERENCE_X             (0x1C)
#define REFERENCE_Y             (0x1D)
#define REFERENCE_Z             (0x1E)

#define CTRL0                   (0x1F)
#define CTRL1                   (0x20)
#define CTRL2                   (0x21)
#define CTRL3                   (0x22)
#define CTRL4                   (0x23)
#define CTRL5                   (0x24)
#define CTRL6                   (0x25)
#define CTRL7                   (0x26)

#define STATUS_A                (0x27)

#define OUT_X_L_A               (0x28)
#define OUT_X_H_A               (0x29)
#define OUT_Y_L_A               (0x2A)
#define OUT_Y_H_A               (0x2B)
#define OUT_Z_L_A               (0x2C)
#define OUT_Z_H_A               (0x2D)

#define FIFO_CTRL               (0x2E)
#define FIFO_SRC                (0x2F)

#define IG_CFG1                 (0x30)
#define IG_SRC1                 (0x31)
#define IG_THS1                 (0x32)
#define IG_DUR1                 (0x33)
#define IG_CFG2                 (0x34)
#define IG_SRC2                 (0x35)
#define IG_THS2                 (0x36)
#define IG_DUR2                 (0x37)

#define CLICK_CFG               (0x38)
#define CLICK_SRC               (0x39)
#define CLICK_THS               (0x3A)

#define TIME_LIMIT              (0x3B)
#define TIME_LATENCY            (0x3C)
#define TIME_WINDOW             (0x3D)

#define ACT_THS                 (0x3E)
#define ACT_DUR                 (0x3F)

#endif //__ACC_MAG_LSM303D_PRIV_H__