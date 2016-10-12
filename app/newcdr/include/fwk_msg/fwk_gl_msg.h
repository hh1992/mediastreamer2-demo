/*   ----------------------------------------------------------------------
Copyright (C) 2014-2016 Fuzhou Rockchip Electronics Co., Ltd

     Sec Class: Rockchip Confidential

V1.0 Dayao Ji <jdy@rock-chips.com>
---------------------------------------------------------------------- */


#ifndef _FWK_GL_MSG_9383837383_
#define _FWK_GL_MSG_9383837383_

#include "fwk_gl_def.h"


#define MSG_ID_FWK_FRAMEWORK_START_BASE								(FWK_MOD_FWK<<16)


/*control message*/
#define MSG_ID_FWK_CONTROL_START_BASE								(FWK_MOD_CONTROL<<16)
#define MSG_ID_FWK_CONTROL_DEMO_REQ									(MSG_ID_FWK_CONTROL_START_BASE+1)
#define MSG_ID_FWK_CONTROL_DEMO_RSP									(MSG_ID_FWK_CONTROL_START_BASE+2)
#define MSG_ID_FWK_CONTROL_COMMU_SWITCH_REQ							(MSG_ID_FWK_CONTROL_START_BASE+3)
#define MSG_ID_FWK_CONTROL_COMMU_SWITCH_RSP							(MSG_ID_FWK_CONTROL_START_BASE+4)
#define MSG_ID_FWK_CONTROL_WRTC_CALL_REQ							(MSG_ID_FWK_CONTROL_START_BASE+5)
#define MSG_ID_FWK_CONTROL_WRTC_CALL_RSP							(MSG_ID_FWK_CONTROL_START_BASE+6)
#define MSG_ID_FWK_CONTROL_TAKE_PICTURE_REQ							(MSG_ID_FWK_CONTROL_START_BASE+7)
#define MSG_ID_FWK_CONTROL_TAKE_PICTURE_RSP							(MSG_ID_FWK_CONTROL_START_BASE+8)
#define MSG_ID_FWK_CONTROL_SET_VALUE_REQ							(MSG_ID_FWK_CONTROL_START_BASE+9)
#define MSG_ID_FWK_CONTROL_SET_VALUE_RSP							(MSG_ID_FWK_CONTROL_START_BASE+10)
#define MSG_ID_FWK_CONTROL_GET_PARAS_REQ							(MSG_ID_FWK_CONTROL_START_BASE+11)
#define MSG_ID_FWK_CONTROL_GET_PARAS_RSP							(MSG_ID_FWK_CONTROL_START_BASE+12)
#define MSG_ID_FWK_CONTROL_SET_DATE_TIME_REQ						(MSG_ID_FWK_CONTROL_START_BASE+13)
#define MSG_ID_FWK_CONTROL_SET_DATE_TIME_RSP						(MSG_ID_FWK_CONTROL_START_BASE+14)
#define MSG_ID_FWK_CONTROL_SET_WIFIPASSWD_REQ						(MSG_ID_FWK_CONTROL_START_BASE+15)
#define MSG_ID_FWK_CONTROL_SET_WIFIPASSWD_RSP						(MSG_ID_FWK_CONTROL_START_BASE+16)
#define MSG_ID_FWK_CONTROL_GET_FILES_REQ							(MSG_ID_FWK_CONTROL_START_BASE+17)
#define MSG_ID_FWK_CONTROL_GET_FILES_RSP							(MSG_ID_FWK_CONTROL_START_BASE+18)
#define MSG_ID_FWK_CONTROL_GET_FILE_INFO_REQ						(MSG_ID_FWK_CONTROL_START_BASE+19)
#define MSG_ID_FWK_CONTROL_GET_FILE_INFO_RSP						(MSG_ID_FWK_CONTROL_START_BASE+20)
#define MSG_ID_FWK_CONTROL_GET_GPS_INFO_REQ							(MSG_ID_FWK_CONTROL_START_BASE+21)
#define MSG_ID_FWK_CONTROL_GET_GPS_INFO_RSP							(MSG_ID_FWK_CONTROL_START_BASE+22)
#define MSG_ID_FWK_CONTROL_GET_FILE_LIST_D_REQ						(MSG_ID_FWK_CONTROL_START_BASE+23)
#define MSG_ID_FWK_CONTROL_GET_FILE_LIST_D_RSP						(MSG_ID_FWK_CONTROL_START_BASE+24)
#define MSG_ID_FWK_CONTROL_DEL_FILE_REQ								(MSG_ID_FWK_CONTROL_START_BASE+25)
#define MSG_ID_FWK_CONTROL_DEL_FILE_RSP								(MSG_ID_FWK_CONTROL_START_BASE+26)
#define MSG_ID_FWK_CONTROL_DEVICE_INFO_REQ							(MSG_ID_FWK_CONTROL_START_BASE+27)
#define MSG_ID_FWK_CONTROL_DEVICE_INFO_RSP							(MSG_ID_FWK_CONTROL_START_BASE+28)
#define MSG_ID_FWK_CONTROL_AP_INFO_REQ								(MSG_ID_FWK_CONTROL_START_BASE+29)
#define MSG_ID_FWK_CONTROL_AP_INFO_RSP								(MSG_ID_FWK_CONTROL_START_BASE+30)
#define MSG_ID_FWK_CONTROL_CAM_NUMBER_INFO_REQ						(MSG_ID_FWK_CONTROL_START_BASE+31)
#define MSG_ID_FWK_CONTROL_CAM_NUMBER_INFO_RSP						(MSG_ID_FWK_CONTROL_START_BASE+32)
#define MSG_ID_FWK_CONTROL_RTSP_URL_REQ								(MSG_ID_FWK_CONTROL_START_BASE+33)
#define MSG_ID_FWK_CONTROL_RTSP_URL_RSP								(MSG_ID_FWK_CONTROL_START_BASE+34)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_VIDEO_REQ						(MSG_ID_FWK_CONTROL_START_BASE+35)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_VIDEO_RSP						(MSG_ID_FWK_CONTROL_START_BASE+36)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_IMAGE_REQ						(MSG_ID_FWK_CONTROL_START_BASE+37)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_IMAGE_RSP						(MSG_ID_FWK_CONTROL_START_BASE+38)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_STATUS_IND						(MSG_ID_FWK_CONTROL_START_BASE+39)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_UPLOAD_REQ						(MSG_ID_FWK_CONTROL_START_BASE+40) 
#define MSG_ID_FWK_CONTROL_3G_REMOTE_UPLOAD_RSP						(MSG_ID_FWK_CONTROL_START_BASE+41) 
#define MSG_ID_FWK_CONTROL_3G_REMOTE_GET_STORAGE_TOKEN_REQ			(MSG_ID_FWK_CONTROL_START_BASE+42)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_GET_STORAGE_TOKEN_RSP			(MSG_ID_FWK_CONTROL_START_BASE+43)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_UPLOAD_DONE_IND				(MSG_ID_FWK_CONTROL_START_BASE+44)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_NOTIFY_IND						(MSG_ID_FWK_CONTROL_START_BASE+45)
#define MSG_ID_FWK_CONTROL_3G_REMOTE_ALARM_IND						(MSG_ID_FWK_CONTROL_START_BASE+46)
#define MSG_ID_FWK_CONTROL_SET_WIFISSID_REQ							(MSG_ID_FWK_CONTROL_START_BASE+47)
#define MSG_ID_FWK_CONTROL_SET_WIFISSID_RSP							(MSG_ID_FWK_CONTROL_START_BASE+48)
#define MSG_ID_FWK_CONTROL_TAKE_THUMB_REQ							(MSG_ID_FWK_CONTROL_START_BASE+49)























/*view message*/
#define MSG_ID_FWK_VIEW_START_BASE									(FWK_MOD_VIEW<<16)


/*camera message*/
#define MSG_ID_FWK_CAMERA_START_BASE								(FWK_MOD_CAMERA<<16)




/*parameter message*/
#define MSG_ID_FWK_PARAMETER_START_BASE								(FWK_MOD_PARAMETER<<16)




/*storage message*/
#define MSG_ID_FWK_STORAGE_START_BASE								(FWK_MOD_STORAGE<<16)



/*gps message*/
#define MSG_ID_FWK_GPS_START_BASE									(FWK_MOD_GPS<<16)



/*wifi message*/
#define MSG_ID_FWK_WIFI_START_BASE									(FWK_MOD_WIFI<<16)



/*cellular message*/
#define MSG_ID_FWK_CELLULAR_START_BASE								(FWK_MOD_CELLULAR<<16)



/*wrtc message*/
#define MSG_ID_FWK_WRTC_START_BASE									(FWK_MOD_WRTC<<16)





#endif