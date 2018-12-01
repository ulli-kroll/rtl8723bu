#ifndef __HAL_TXBF_INTERFACE_H__
#define __HAL_TXBF_INTERFACE_H__

#define Beamforming_GetNDPAFrame(pDM_Odm, _PduOS)
#define SendFWHTNDPAPacket(pDM_VOID, RA, BW)
#define SendSWHTNDPAPacket(pDM_VOID, RA, BW)
#define SendFWVHTNDPAPacket(pDM_VOID, RA, AID, BW)
#define SendSWVHTNDPAPacket(pDM_VOID, RA,	AID, BW)
#define SendSWVHTGIDMgntFrame(pDM_VOID, RA, idx)
#define SendSWVHTBFReportPoll(pDM_VOID, RA, bFinalPoll)
#define SendSWVHTMUNDPAPacket(pDM_VOID, BW)

#endif
