/***************************************************************************//*!
* \file Lib.c
* \author Biye Chen
* \copyright Arxtron Technologies Inc.. All Rights Reserved.
* \date 11/23/2022 7:36:10 PM
* \brief A short description.
* 
* A longer description.
* 
* This Library was created using
* * Template version 1.2.4
* * ArxtronToolslib version 1.1.0
* * DebugToolslib version 0.0.0
* * GUIToolslib version 0.0.0
* PLEASE ONLY UPDATE THE VERSION NUMBERS WHEN UPDATING THE TEMPLATE OR RELATED TOOLSLIB
* THESE VERSION NUMBERS SHOULD BE SEPARATE FROM THE LIBRARY VERSION
* THE ALL CAPS PORTION OF THIS COMMENT SECTION CAN BE REMOVED AFTER CREATING THE LIBRARY
*******************************************************************************/

//! \cond
/// REGION START Header
//! \endcond
//==============================================================================
// Include files

#include <ansi_c.h>
#include <utility.h>
#include "Lib.h"
#include "Lib_Definitions.h"

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

//==============================================================================
// Global variables

//==============================================================================
// Global functions

//! \cond
/// REGION END

/// REGION START Code Body
//! \endcond

/***************************************************************************//*!
* \brief Increments members of a struct
*******************************************************************************/
void IncrementMembers (TSPassInStruct *VarStruct)
{
	VarStruct->member1 += 1;
	VarStruct->member2 += 2;
	VarStruct->member3 += 3;
}
//! \cond
/// REGION END
//! \endcond
