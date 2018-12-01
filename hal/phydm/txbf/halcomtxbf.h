#ifndef __HAL_COM_TXBF_H__
#define __HAL_COM_TXBF_H__

/*
typedef	BOOLEAN
(*TXBF_GET)(
	IN	PVOID			pAdapter,
	IN	u1Byte			getType,
	OUT	PVOID			pOutBuf
	);

typedef	BOOLEAN
(*TXBF_SET)(
	IN	PVOID			pAdapter,
	IN	u1Byte			setType,
	OUT	PVOID			pInBuf
	);
*/
#define TxBF_Nr(a, b) ((a > b) ? (b) : (a))

typedef enum _TXBF_SET_TYPE{
	TXBF_SET_SOUNDING_ENTER,
	TXBF_SET_SOUNDING_LEAVE,
	TXBF_SET_SOUNDING_RATE,
	TXBF_SET_SOUNDING_STATUS,
	TXBF_SET_SOUNDING_FW_NDPA,
	TXBF_SET_SOUNDING_CLK,
	TXBF_SET_TX_PATH_RESET,
	TXBF_SET_GET_TX_RATE
}TXBF_SET_TYPE,*PTXBF_SET_TYPE;


typedef enum _TXBF_GET_TYPE{
	TXBF_GET_EXPLICIT_BEAMFORMEE,
	TXBF_GET_EXPLICIT_BEAMFORMER,
	TXBF_GET_MU_MIMO_STA,
	TXBF_GET_MU_MIMO_AP
}TXBF_GET_TYPE,*PTXBF_GET_TYPE;



//2 HAL TXBF related
typedef struct _HAL_TXBF_INFO {
	u1Byte				TXBFIdx;
	u1Byte				NdpaIdx;
	u1Byte				BW;
	u1Byte				Rate;

	RT_TIMER			Txbf_FwNdpaTimer;
#if (DM_ODM_SUPPORT_TYPE == ODM_WIN)	
	RT_WORK_ITEM		Txbf_EnterWorkItem;  
	RT_WORK_ITEM		Txbf_LeaveWorkItem;
	RT_WORK_ITEM		Txbf_FwNdpaWorkItem;
	RT_WORK_ITEM		Txbf_ClkWorkItem;
	RT_WORK_ITEM		Txbf_StatusWorkItem;
	RT_WORK_ITEM		Txbf_RateWorkItem;
	RT_WORK_ITEM		Txbf_ResetTxPathWorkItem;
	RT_WORK_ITEM		Txbf_GetTxRateWorkItem;
#endif

} HAL_TXBF_INFO, *PHAL_TXBF_INFO;

#define halComTxbf_beamformInit(pDM_VOID)					NULL
#define halComTxbf_ConfigGtab(pDM_VOID)				NULL
#define halComTxbf_EnterWorkItemCallback(_Adapter)		NULL
#define halComTxbf_LeaveWorkItemCallback(_Adapter)		NULL
#define halComTxbf_FwNdpaWorkItemCallback(_Adapter)		NULL
#define halComTxbf_ClkWorkItemCallback(_Adapter)			NULL
#define halComTxbf_RateWorkItemCallback(_Adapter)		NULL
#define halComTxbf_FwNdpaTimerCallback(_Adapter)		NULL
#define halComTxbf_StatusWorkItemCallback(_Adapter)		NULL
#define HalComTxbf_Get(_Adapter, _getType, _pOutBuf)
							
#endif	// #ifndef __HAL_COM_TXBF_H__								

