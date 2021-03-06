/* MD5: 72d48ea565b8a466587e07434e847d4f*/
#if !defined(__PRODUCT_CONFIG_PAM_H__)
#define __PRODUCT_CONFIG_PAM_H__

#ifndef BBP_MASTER_NONE
#define BBP_MASTER_NONE 0 
#endif 

#ifndef BBP_MASTER_V8R1
#define BBP_MASTER_V8R1 1 
#endif 

#ifndef BBP_MASTER_V7R5
#define BBP_MASTER_V7R5 2 
#endif 

#ifndef BBP_MASTER_V8R5
#define BBP_MASTER_V8R5 3 
#endif 

#ifndef BBP_MASTER_K3V6
#define BBP_MASTER_K3V6 4 
#endif 

#ifndef BBP_MASTER_KIRIN970
#define BBP_MASTER_KIRIN970 5 
#endif 

#ifndef FEATURE_BBP_MASTER_VER
#define FEATURE_BBP_MASTER_VER (BBP_MASTER_K3V6) 
#endif 

#ifndef FEATURE_BBP_MASTER
#define FEATURE_BBP_MASTER FEATURE_ON 
#endif 

#ifndef BBP_MASTER_INT_MODE
#define BBP_MASTER_INT_MODE FEATURE_ON 
#endif 

#ifndef FEATURE_BBP_MASTER_CHAN_EXTEND
#define FEATURE_BBP_MASTER_CHAN_EXTEND FEATURE_ON 
#endif 

#ifndef FEATURE_BBP_MASTER_CHAN_U2
#define FEATURE_BBP_MASTER_CHAN_U2 FEATURE_ON 
#endif 

#ifndef FEATURE_POWER_TIMER
#define FEATURE_POWER_TIMER FEATURE_ON 
#endif 

#ifndef FEATURE_UE_UICC_MULTI_APP_SUPPORT
#define FEATURE_UE_UICC_MULTI_APP_SUPPORT FEATURE_ON 
#endif 

#ifndef FEATURE_VSIM
#define FEATURE_VSIM FEATURE_ON 
#endif 

#ifndef FEATURE_GUC_BBP_TRIG
#define FEATURE_GUC_BBP_TRIG FEATURE_ON 
#endif 

#ifndef FEATURE_GUBBP_HANDSHAKE
#define FEATURE_GUBBP_HANDSHAKE FEATURE_ON 
#endif 

#ifndef FEATURE_GUDRX_NEWVERSION
#define FEATURE_GUDRX_NEWVERSION FEATURE_ON 
#endif 

#ifndef FEATURE_VOS_REDUCE_MEM_CFG
#define FEATURE_VOS_REDUCE_MEM_CFG FEATURE_OFF 
#endif 

#ifndef FEATURE_OM_BBPLOG
#define FEATURE_OM_BBPLOG FEATURE_OFF 
#endif 

#ifndef FEATURE_RTC_TIMER_DBG
#define FEATURE_RTC_TIMER_DBG FEATURE_ON 
#endif 

#ifndef FEATURE_PHONE_SC
#define FEATURE_PHONE_SC FEATURE_ON 
#endif 

#ifndef FEATURE_SC_SEC_UPDATE
#define FEATURE_SC_SEC_UPDATE FEATURE_ON 
#endif 

#ifndef FEATURE_VSIM_ICC_SEC_CHANNEL
#define FEATURE_VSIM_ICC_SEC_CHANNEL FEATURE_ON 
#endif 

#endif /*__PRODUCT_CONFIG_H__*/ 
