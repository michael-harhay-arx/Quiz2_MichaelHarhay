/***************************************************************************//*!
* \file Lib.h
* \author Biye Chen
* \copyright Arxtron Technologies Inc.. All Rights Reserved.
* \date 11/23/2022 7:36:10 PM
*******************************************************************************/

#ifndef __Lib_H__
#define __Lib_H__

#ifdef __cplusplus
    extern "C" {
#endif

//==============================================================================
// Include files

#include "cvidef.h"
#include "ArxtronToolslib.h"

//==============================================================================
// Constants

//==============================================================================
// Types

typedef struct {
	int member1;
	int member2;
	int member3
} TSPassInStruct;
		
//==============================================================================
// Global vaiables

//==============================================================================
// External variables

//==============================================================================
// Global functions

void IncrementMembers (TSPassInStruct *VarStruct);

#ifdef __cplusplus
    }
#endif

#endif  /* ndef __Lib_H__ */