/*----- PROTECTED REGION ID(HdbConfigurationManagerStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id: HdbConfigurationManagerStateMachine.cpp,v 1.2 2014-03-07 14:04:20 graziano Exp $";
//=============================================================================
//
// file :        HdbConfigurationManagerStateMachine.cpp
//
// description : State machine file for the HdbConfigurationManager class
//
// project :     Hdb++ configuration manager
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author: graziano $
//
// $Revision: 1.2 $
// $Date: 2014-03-07 14:04:20 $
//
// $HeadURL: svn+ssh://scalamera@svn.code.sf.net/p/tango-cs/code/archiving/hdb++/hdb++cm/trunk/src/HdbConfigurationManagerStateMachine.cpp $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <HdbConfigurationManager.h>

/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::HdbConfigurationManagerStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================
//  ON      |  
//  ALARM   |  At least one archiver is in ALARM


namespace HdbConfigurationManager_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeOKNumber_allowed()
 *	Description : Execution allowed for AttributeOKNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeOKNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeOKNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeOKNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeOKNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeNokNumber_allowed()
 *	Description : Execution allowed for AttributeNokNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeNokNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeNokNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeNokNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeNokNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributePendingNumber_allowed()
 *	Description : Execution allowed for AttributePendingNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributePendingNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributePendingNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributePendingNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributePendingNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeNumber_allowed()
 *	Description : Execution allowed for AttributeNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetAttributeName_allowed()
 *	Description : Execution allowed for SetAttributeName attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetAttributeName_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetAttributeName attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetAttributeNameStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetAttributeNameStateAllowed_WRITE

	//	Not any excluded states for SetAttributeName attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetAttributeNameStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetAttributeNameStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetPollingPeriod_allowed()
 *	Description : Execution allowed for SetPollingPeriod attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetPollingPeriod_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetPollingPeriod attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetPollingPeriodStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetPollingPeriodStateAllowed_WRITE

	//	Not any excluded states for SetPollingPeriod attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetPollingPeriodStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetPollingPeriodStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetAbsoluteEvent_allowed()
 *	Description : Execution allowed for SetAbsoluteEvent attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetAbsoluteEvent_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetAbsoluteEvent attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetAbsoluteEventStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetAbsoluteEventStateAllowed_WRITE

	//	Not any excluded states for SetAbsoluteEvent attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetAbsoluteEventStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetAbsoluteEventStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetRelativeEvent_allowed()
 *	Description : Execution allowed for SetRelativeEvent attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetRelativeEvent_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetRelativeEvent attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetRelativeEventStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetRelativeEventStateAllowed_WRITE

	//	Not any excluded states for SetRelativeEvent attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetRelativeEventStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetRelativeEventStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetPeriodEvent_allowed()
 *	Description : Execution allowed for SetPeriodEvent attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetPeriodEvent_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetPeriodEvent attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetPeriodEventStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetPeriodEventStateAllowed_WRITE

	//	Not any excluded states for SetPeriodEvent attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetPeriodEventStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetPeriodEventStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetCodePushedEvent_allowed()
 *	Description : Execution allowed for SetCodePushedEvent attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetCodePushedEvent_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetCodePushedEvent attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetCodePushedEventStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetCodePushedEventStateAllowed_WRITE

	//	Not any excluded states for SetCodePushedEvent attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetCodePushedEventStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetCodePushedEventStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetArchiver_allowed()
 *	Description : Execution allowed for SetArchiver attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetArchiver_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetArchiver attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetArchiverStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetArchiverStateAllowed_WRITE

	//	Not any excluded states for SetArchiver attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetArchiverStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetArchiverStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeMaxStoreTime_allowed()
 *	Description : Execution allowed for AttributeMaxStoreTime attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeMaxStoreTime_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeMaxStoreTime attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeMaxStoreTimeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeMaxStoreTimeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeMinStoreTime_allowed()
 *	Description : Execution allowed for AttributeMinStoreTime attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeMinStoreTime_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeMinStoreTime attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeMinStoreTimeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeMinStoreTimeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeMaxProcessingTime_allowed()
 *	Description : Execution allowed for AttributeMaxProcessingTime attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeMaxProcessingTime_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeMaxProcessingTime attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeMaxProcessingTimeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeMaxProcessingTimeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeMinProcessingTime_allowed()
 *	Description : Execution allowed for AttributeMinProcessingTime attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeMinProcessingTime_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeMinProcessingTime attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeMinProcessingTimeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeMinProcessingTimeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeRecordFreq_allowed()
 *	Description : Execution allowed for AttributeRecordFreq attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeRecordFreq_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeRecordFreq attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeRecordFreqStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeRecordFreqStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeFailureFreq_allowed()
 *	Description : Execution allowed for AttributeFailureFreq attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeFailureFreq_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeFailureFreq attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeFailureFreqStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeFailureFreqStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeStartedNumber_allowed()
 *	Description : Execution allowed for AttributeStartedNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeStartedNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeStartedNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeStartedNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeStartedNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeStoppedNumber_allowed()
 *	Description : Execution allowed for AttributeStoppedNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeStoppedNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeStoppedNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeStoppedNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeStoppedNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeMaxPendingNumber_allowed()
 *	Description : Execution allowed for AttributeMaxPendingNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeMaxPendingNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributeMaxPendingNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeMaxPendingNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeMaxPendingNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributePausedNumber_allowed()
 *	Description : Execution allowed for AttributePausedNumber attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributePausedNumber_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for AttributePausedNumber attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributePausedNumberStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributePausedNumberStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetTTL_allowed()
 *	Description : Execution allowed for SetTTL attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetTTL_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetTTL attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetTTLStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetTTLStateAllowed_WRITE

	//	Not any excluded states for SetTTL attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetTTLStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetTTLStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetStrategy_allowed()
 *	Description : Execution allowed for SetStrategy attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetStrategy_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for SetStrategy attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetStrategyStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetStrategyStateAllowed_WRITE

	//	Not any excluded states for SetStrategy attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetStrategyStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetStrategyStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_Context_allowed()
 *	Description : Execution allowed for Context attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_Context_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for Context attribute in Write access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ContextStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ContextStateAllowed_WRITE

	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverList_allowed()
 *	Description : Execution allowed for ArchiverList attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverList_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ArchiverList attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverListStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverListStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverStatus_allowed()
 *	Description : Execution allowed for ArchiverStatus attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverStatus_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ArchiverStatus attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverStatusStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverStatusStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverStatisticsResetTime_allowed()
 *	Description : Execution allowed for ArchiverStatisticsResetTime attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverStatisticsResetTime_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ArchiverStatisticsResetTime attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverStatisticsResetTimeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverStatisticsResetTimeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverContext_allowed()
 *	Description : Execution allowed for ArchiverContext attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverContext_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ArchiverContext attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverContextStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverContextStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ContextsList_allowed()
 *	Description : Execution allowed for ContextsList attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ContextsList_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for ContextsList attribute in read access.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ContextsListStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ContextsListStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeAdd_allowed()
 *	Description : Execution allowed for AttributeAdd attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeAdd_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeAdd command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeAddStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeAddStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeRemove_allowed()
 *	Description : Execution allowed for AttributeRemove attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeRemove_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeRemove command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeRemoveStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeRemoveStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeStart_allowed()
 *	Description : Execution allowed for AttributeStart attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeStart_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeStart command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeStartStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeStartStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeStop_allowed()
 *	Description : Execution allowed for AttributeStop attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeStop_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeStop command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeStopStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeStopStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverAdd_allowed()
 *	Description : Execution allowed for ArchiverAdd attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverAdd_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ArchiverAdd command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverAddStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverAddStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeAssign_allowed()
 *	Description : Execution allowed for AttributeAssign attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeAssign_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeAssign command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeAssignStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeAssignStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeStatus_allowed()
 *	Description : Execution allowed for AttributeStatus attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeStatus_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeStatus command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeStatusStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeStatusStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeGetArchiver_allowed()
 *	Description : Execution allowed for AttributeGetArchiver attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeGetArchiver_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeGetArchiver command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeGetArchiverStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeGetArchiverStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributeSearch_allowed()
 *	Description : Execution allowed for AttributeSearch attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributeSearch_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributeSearch command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributeSearchStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributeSearchStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ArchiverRemove_allowed()
 *	Description : Execution allowed for ArchiverRemove attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ArchiverRemove_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ArchiverRemove command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ArchiverRemoveStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ArchiverRemoveStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_ResetStatistics_allowed()
 *	Description : Execution allowed for ResetStatistics attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_ResetStatistics_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetStatistics command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::ResetStatisticsStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::ResetStatisticsStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_AttributePause_allowed()
 *	Description : Execution allowed for AttributePause attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_AttributePause_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for AttributePause command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::AttributePauseStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::AttributePauseStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_SetAttributeStrategy_allowed()
 *	Description : Execution allowed for SetAttributeStrategy attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_SetAttributeStrategy_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetAttributeStrategy command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::SetAttributeStrategyStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::SetAttributeStrategyStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : HdbConfigurationManager::is_GetAttributeStrategy_allowed()
 *	Description : Execution allowed for GetAttributeStrategy attribute
 */
//--------------------------------------------------------
bool HdbConfigurationManager::is_GetAttributeStrategy_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetAttributeStrategy command.
	/*----- PROTECTED REGION ID(HdbConfigurationManager::GetAttributeStrategyStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::GetAttributeStrategyStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(HdbConfigurationManager::HdbConfigurationManagerStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::HdbConfigurationManagerStateAllowed.AdditionalMethods

}	//	End of namespace
