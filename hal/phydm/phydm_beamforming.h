#ifndef __INC_BEAMFORMING_H
#define __INC_BEAMFORMING_H

/*Beamforming Related*/
#include "txbf/halcomtxbf.h"
#include "txbf/haltxbfinterface.h"

#define Beamforming_GidPAid(Adapter, pTcb)
#define Beamforming_Enter(pDM_Odm, staIdx)
#define Beamforming_Leave(pDM_Odm, RA)
#define Beamforming_End_FW(pDMOdm)
#define BeamformingControl_V1(pDM_Odm, RA, AID, Mode, BW, Rate)		TRUE
#define BeamformingControl_V2(pDM_Odm, Idx, Mode, BW, Period)		TRUE
#define phydm_Beamforming_End_SW(pDM_Odm, _Status)
#define Beamforming_TimerCallback(pDM_Odm)
#define phydm_Beamforming_Init(pDM_Odm)
#define phydm_BeamformingControl_V2(pDM_Odm, _Idx, _Mode, _BW, _Period)	FALSE
#define Beamforming_Watchdog(pDM_Odm)
#define phydm_Beamforming_Watchdog(pDM_Odm)


#endif
