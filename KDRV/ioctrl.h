#ifndef _IOCTRL_H
#define _IOCTRL_H

#include "global.h"

#define KDRV_CTRL_TARGET_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0100, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define KDRV_CTRL_READ_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0200, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define KDRV_CTRL_WRITE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0201, METHOD_OUT_DIRECT, FILE_SPECIAL_ACCESS)

typedef struct _KDRV_TARGET_REQUEST
{
  ULONG Pid;
  PVOID Base;
  SIZE_T Size;
} KDRV_TARGET_REQUEST, * PKDRV_TARGET_REQUEST;

#endif