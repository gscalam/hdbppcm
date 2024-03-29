/*----- PROTECTED REGION ID(HdbConfigurationManager.h) ENABLED START -----*/
//=============================================================================
//
// file :        HdbConfigurationManager.h
//
// description : Include file for the HdbConfigurationManager class
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
// $Revision: 1.3 $
// $Date: 2014-03-07 14:04:20 $
//
// $HeadURL: svn+ssh://scalamera@svn.code.sf.net/p/tango-cs/code/archiving/hdb++/hdb++cm/trunk/src/HdbConfigurationManager.h $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef HdbConfigurationManager_H
#define HdbConfigurationManager_H

#include <tango.h>
#include "LibHdb++.h"


/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager.h

/**
 *  HdbConfigurationManager class description:
 *    
 */

namespace HdbConfigurationManager_ns
{
/*----- PROTECTED REGION ID(HdbConfigurationManager::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations
typedef struct {
	vector<string> attr_list;
	Tango::DeviceProxy *dp;
} archiver_t;


bool compare_tango_names(string str1, string str2);

struct tango_names_compare {
  bool operator() (string str1, string str2) const
  {return compare_tango_names(str1,str2);}
};

typedef map<string,archiver_t,tango_names_compare> archiver_map_t;

/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::Additional Class Declarations

class HdbConfigurationManager : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(HdbConfigurationManager::Data Members) ENABLED START -----*/

//	Add your own data members
protected:
/*	Tango::DevString	attr_AddAttributeName_write;
	Tango::DevLong	attr_AddPollingPeriod_write;
	Tango::DevDouble	attr_AddAbsoluteEvent_write;
	Tango::DevDouble	attr_AddRelativeEvent_write;
	Tango::DevLong	attr_AddPeriodEvent_write;
	Tango::DevBoolean	attr_AddCodePushedEvent_write;
	Tango::DevString	attr_AddEventSubscriber_write;*/

	string find_archiver(string signame);

	bool compare_without_domain(string str1, string str2);

	archiver_map_t archiverMap;
	vector<string> archiver_list_str;
	vector<string> archiver_list_fix;
	vector<string> archiver_status_str;
	vector<string> attribute_search_list_str;
	vector<double> archiver_statistics_reset_time;
	vector<string> archiver_context_str;
	vector<string> contexts_list_str;

	Tango::DevLong	original_SetPollingPeriod;

	HdbClient *mdb;
	static map<string, string> domain_map;
	timespec last_stat;
public:
	static string remove_domain(string str);
	static void fix_tango_host(string &attr);
	static void add_domain(string &attr);
	static string get_only_attr_name(string str);
	static string get_only_tango_host(string str);
#ifdef _MULTI_TANGO_HOST
	static void string_explode(string str, string separator, vector<string>* results);
#endif

#ifdef _USE_FERMI_DB_RW
private:
	string host_rw;
	long port_rw;
#endif


/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::Data Members

//	Device property data members
public:
	//	ArchiverList:	
	vector<string>	archiverList;
	//	MaxSearchSize:	Max size of search result
	Tango::DevLong	maxSearchSize;
	//	LibConfiguration:	Configuration for the library
	vector<string>	libConfiguration;

	bool	mandatoryNotDefined;

//	Attribute data members
public:
	Tango::DevLong	*attr_AttributeOKNumber_read;
	Tango::DevLong	*attr_AttributeNokNumber_read;
	Tango::DevLong	*attr_AttributePendingNumber_read;
	Tango::DevLong	*attr_AttributeNumber_read;
	Tango::DevString	*attr_SetAttributeName_read;
	Tango::DevLong	*attr_SetPollingPeriod_read;
	Tango::DevDouble	*attr_SetAbsoluteEvent_read;
	Tango::DevDouble	*attr_SetRelativeEvent_read;
	Tango::DevLong	*attr_SetPeriodEvent_read;
	Tango::DevBoolean	*attr_SetCodePushedEvent_read;
	Tango::DevString	*attr_SetArchiver_read;
	Tango::DevDouble	*attr_AttributeMaxStoreTime_read;
	Tango::DevDouble	*attr_AttributeMinStoreTime_read;
	Tango::DevDouble	*attr_AttributeMaxProcessingTime_read;
	Tango::DevDouble	*attr_AttributeMinProcessingTime_read;
	Tango::DevDouble	*attr_AttributeRecordFreq_read;
	Tango::DevDouble	*attr_AttributeFailureFreq_read;
	Tango::DevLong	*attr_AttributeStartedNumber_read;
	Tango::DevLong	*attr_AttributeStoppedNumber_read;
	Tango::DevLong	*attr_AttributeMaxPendingNumber_read;
	Tango::DevLong	*attr_AttributePausedNumber_read;
	Tango::DevULong	*attr_SetTTL_read;
	Tango::DevString	*attr_SetStrategy_read;
	Tango::DevString	*attr_ArchiverList_read;
	Tango::DevString	*attr_ArchiverStatus_read;
	Tango::DevDouble	*attr_ArchiverStatisticsResetTime_read;
	Tango::DevString	*attr_ArchiverContext_read;
	Tango::DevString	*attr_ContextsList_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	HdbConfigurationManager(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	HdbConfigurationManager(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	HdbConfigurationManager(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~HdbConfigurationManager() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();

	/*
	 *	Check if mandatory property has been set
	 */
	 void check_mandatory_property(Tango::DbDatum &class_prop, Tango::DbDatum &dev_prop);

//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : HdbConfigurationManager::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : HdbConfigurationManager::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute AttributeOKNumber related methods
 *	Description: Number of archived attributes not in error
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeOKNumber(Tango::Attribute &attr);
	virtual bool is_AttributeOKNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeNokNumber related methods
 *	Description: Number of archived attributes in error
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeNokNumber(Tango::Attribute &attr);
	virtual bool is_AttributeNokNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributePendingNumber related methods
 *	Description: Number of attributes waiting to be archived
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributePendingNumber(Tango::Attribute &attr);
	virtual bool is_AttributePendingNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeNumber related methods
 *	Description: Number of configured attributes
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeNumber(Tango::Attribute &attr);
	virtual bool is_AttributeNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute SetAttributeName related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_SetAttributeName(Tango::Attribute &attr);
	virtual void write_SetAttributeName(Tango::WAttribute &attr);
	virtual bool is_SetAttributeName_allowed(Tango::AttReqType type);
/**
 *	Attribute SetPollingPeriod related methods
 *	Description: 
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_SetPollingPeriod(Tango::Attribute &attr);
	virtual void write_SetPollingPeriod(Tango::WAttribute &attr);
	virtual bool is_SetPollingPeriod_allowed(Tango::AttReqType type);
/**
 *	Attribute SetAbsoluteEvent related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_SetAbsoluteEvent(Tango::Attribute &attr);
	virtual void write_SetAbsoluteEvent(Tango::WAttribute &attr);
	virtual bool is_SetAbsoluteEvent_allowed(Tango::AttReqType type);
/**
 *	Attribute SetRelativeEvent related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_SetRelativeEvent(Tango::Attribute &attr);
	virtual void write_SetRelativeEvent(Tango::WAttribute &attr);
	virtual bool is_SetRelativeEvent_allowed(Tango::AttReqType type);
/**
 *	Attribute SetPeriodEvent related methods
 *	Description: 
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_SetPeriodEvent(Tango::Attribute &attr);
	virtual void write_SetPeriodEvent(Tango::WAttribute &attr);
	virtual bool is_SetPeriodEvent_allowed(Tango::AttReqType type);
/**
 *	Attribute SetCodePushedEvent related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_SetCodePushedEvent(Tango::Attribute &attr);
	virtual void write_SetCodePushedEvent(Tango::WAttribute &attr);
	virtual bool is_SetCodePushedEvent_allowed(Tango::AttReqType type);
/**
 *	Attribute SetArchiver related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_SetArchiver(Tango::Attribute &attr);
	virtual void write_SetArchiver(Tango::WAttribute &attr);
	virtual bool is_SetArchiver_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeMaxStoreTime related methods
 *	Description: Maximum storing time
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeMaxStoreTime(Tango::Attribute &attr);
	virtual bool is_AttributeMaxStoreTime_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeMinStoreTime related methods
 *	Description: Minimum storing time
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeMinStoreTime(Tango::Attribute &attr);
	virtual bool is_AttributeMinStoreTime_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeMaxProcessingTime related methods
 *	Description: Maximum processing (from event reception to storage) time
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeMaxProcessingTime(Tango::Attribute &attr);
	virtual bool is_AttributeMaxProcessingTime_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeMinProcessingTime related methods
 *	Description: Minimum processing (from event reception to storage) time
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeMinProcessingTime(Tango::Attribute &attr);
	virtual bool is_AttributeMinProcessingTime_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeRecordFreq related methods
 *	Description: Record frequency
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeRecordFreq(Tango::Attribute &attr);
	virtual bool is_AttributeRecordFreq_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeFailureFreq related methods
 *	Description: Failure frequency
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_AttributeFailureFreq(Tango::Attribute &attr);
	virtual bool is_AttributeFailureFreq_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeStartedNumber related methods
 *	Description: Number of archived attributes started
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeStartedNumber(Tango::Attribute &attr);
	virtual bool is_AttributeStartedNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeStoppedNumber related methods
 *	Description: Number of archived attributes stopped
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeStoppedNumber(Tango::Attribute &attr);
	virtual bool is_AttributeStoppedNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributeMaxPendingNumber related methods
 *	Description: Max number of attributes waiting to be archived
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributeMaxPendingNumber(Tango::Attribute &attr);
	virtual bool is_AttributeMaxPendingNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute AttributePausedNumber related methods
 *	Description: Number of archived attributes paused
 *
 *	Data type:	Tango::DevLong
 *	Attr type:	Scalar
 */
	virtual void read_AttributePausedNumber(Tango::Attribute &attr);
	virtual bool is_AttributePausedNumber_allowed(Tango::AttReqType type);
/**
 *	Attribute SetTTL related methods
 *	Description: Time To Live for temporary storage in hours
 *
 *	Data type:	Tango::DevULong
 *	Attr type:	Scalar
 */
	virtual void read_SetTTL(Tango::Attribute &attr);
	virtual void write_SetTTL(Tango::WAttribute &attr);
	virtual bool is_SetTTL_allowed(Tango::AttReqType type);
/**
 *	Attribute SetStrategy related methods
 *	Description: list of strategies separated with |
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_SetStrategy(Tango::Attribute &attr);
	virtual void write_SetStrategy(Tango::WAttribute &attr);
	virtual bool is_SetStrategy_allowed(Tango::AttReqType type);
/**
 *	Attribute Context related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void write_Context(Tango::WAttribute &attr);
	virtual bool is_Context_allowed(Tango::AttReqType type);
/**
 *	Attribute ArchiverList related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_ArchiverList(Tango::Attribute &attr);
	virtual bool is_ArchiverList_allowed(Tango::AttReqType type);
/**
 *	Attribute ArchiverStatus related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_ArchiverStatus(Tango::Attribute &attr);
	virtual bool is_ArchiverStatus_allowed(Tango::AttReqType type);
/**
 *	Attribute ArchiverStatisticsResetTime related methods
 *	Description: Seconds elapsed since last statistics reset
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_ArchiverStatisticsResetTime(Tango::Attribute &attr);
	virtual bool is_ArchiverStatisticsResetTime_allowed(Tango::AttReqType type);
/**
 *	Attribute ArchiverContext related methods
 *	Description: Archiver context
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_ArchiverContext(Tango::Attribute &attr);
	virtual bool is_ArchiverContext_allowed(Tango::AttReqType type);
/**
 *	Attribute ContextsList related methods
 *	Description: 
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_ContextsList(Tango::Attribute &attr);
	virtual bool is_ContextsList_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : HdbConfigurationManager::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command AttributeAdd related method
	 *	Description: Add a new attribute to archive in HDB.
	 *
	 */
	virtual void attribute_add();
	virtual bool is_AttributeAdd_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeRemove related method
	 *	Description: Remove attribute from configuration.
	 *
	 *	@param argin Attribute name
	 */
	virtual void attribute_remove(Tango::DevString argin);
	virtual bool is_AttributeRemove_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeStart related method
	 *	Description: Start archiving single attribute
	 *
	 *	@param argin Attribute name
	 */
	virtual void attribute_start(Tango::DevString argin);
	virtual bool is_AttributeStart_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeStop related method
	 *	Description: Stop archiving single attribute
	 *
	 *	@param argin Attribute name
	 */
	virtual void attribute_stop(Tango::DevString argin);
	virtual bool is_AttributeStop_allowed(const CORBA::Any &any);
	/**
	 *	Command ArchiverAdd related method
	 *	Description: Add a new archiver to archive in HDB.
	 *
	 *	@param argin Archiver name
	 */
	virtual void archiver_add(Tango::DevString argin);
	virtual bool is_ArchiverAdd_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeAssign related method
	 *	Description: Assigne attribute to archiver.
	 *               If Strategy is not specified use DefaultStrategy of the target archiver.
	 *
	 *	@param argin [0]: Attribute name
	 *               [1]: Archiver name
	 *               [2]: Attribute Strategy
	 */
	virtual void attribute_assign(const Tango::DevVarStringArray *argin);
	virtual bool is_AttributeAssign_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeStatus related method
	 *	Description: Read an attribute status
	 *
	 *	@param argin The attribute name
	 *	@returns The attribute status. TODO: DevString OK?
	 */
	virtual Tango::DevString attribute_status(Tango::DevString argin);
	virtual bool is_AttributeStatus_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeGetArchiver related method
	 *	Description: Return archiver associated to attribute.
	 *
	 *	@param argin Attribute name
	 *	@returns Archiver name
	 */
	virtual Tango::DevString attribute_get_archiver(Tango::DevString argin);
	virtual bool is_AttributeGetArchiver_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributeSearch related method
	 *	Description: Return list of attributes containing input argument
	 *
	 *	@param argin Attribute name or part of it
	 *	@returns Attribute list
	 */
	virtual Tango::DevVarStringArray *attribute_search(Tango::DevString argin);
	virtual bool is_AttributeSearch_allowed(const CORBA::Any &any);
	/**
	 *	Command ArchiverRemove related method
	 *	Description: Remove archiver instance.
	 *
	 *	@param argin Archiver name
	 */
	virtual void archiver_remove(Tango::DevString argin);
	virtual bool is_ArchiverRemove_allowed(const CORBA::Any &any);
	/**
	 *	Command ResetStatistics related method
	 *	Description: Reset statistic counters
	 *
	 */
	virtual void reset_statistics();
	virtual bool is_ResetStatistics_allowed(const CORBA::Any &any);
	/**
	 *	Command AttributePause related method
	 *	Description: Pause archiving single attribute
	 *
	 *	@param argin Attribute name
	 */
	virtual void attribute_pause(Tango::DevString argin);
	virtual bool is_AttributePause_allowed(const CORBA::Any &any);
	/**
	 *	Command SetAttributeStrategy related method
	 *	Description: Update strategies for an already archived attribute.
	 *
	 *	@param argin Attribute name, strategies
	 */
	virtual void set_attribute_strategy(const Tango::DevVarStringArray *argin);
	virtual bool is_SetAttributeStrategy_allowed(const CORBA::Any &any);
	/**
	 *	Command GetAttributeStrategy related method
	 *	Description: 
	 *
	 *	@param argin Attribute name
	 *	@returns Strategy
	 */
	virtual Tango::DevString get_attribute_strategy(Tango::DevString argin);
	virtual bool is_GetAttributeStrategy_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : HdbConfigurationManager::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(HdbConfigurationManager::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::Additional Method prototypes
};

/*----- PROTECTED REGION ID(HdbConfigurationManager::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	HdbConfigurationManager::Additional Classes Definitions

}	//	End of namespace

#endif   //	HdbConfigurationManager_H
