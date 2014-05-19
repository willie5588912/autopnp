/*
 * Copyright (c) 2011-2014, fortiss GmbH.
 * Licensed under the Apache License, Version 2.0.
 *
 * Use, modification and distribution are subject to the terms specified
 * in the accompanying license file LICENSE.txt located at the root directory
 * of this software distribution. A copy is available at
 * http://chromosome.fortiss.org/.
 *
 * This file is part of CHROMOSOME.
 *
 * $Id: operateFunction.c 7805 2014-03-13 09:54:35Z geisinger $
 */

/**
 * \file
 *         Source file for function operate in component device.
 *
 * \author
 *         This file has been generated by the CHROMOSOME Modeling Tool (XMT)
 *         (fortiss GmbH).
 */

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "detector/adv/device/include/operateFunction.h"

#include "detector/adv/device/include/operateFunctionWrapper.h"
#include "detector/adv/device/include/deviceComponent.h"
#include "detector/adv/device/include/deviceComponentWrapper.h"
#include "detector/adv/device/include/deviceManifest.h"

#include "xme/core/logUtils.h"

// PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_C_INCLUDES) ENABLED START
#include "xme/hal/include/safeString.h" //TODO
// PROTECTED REGION END

/******************************************************************************/
/***   Definitions                                                          ***/
/******************************************************************************/

// PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_C_DEFINITIONS) ENABLED START
// PROTECTED REGION END

/******************************************************************************/
/***   Variables                                                            ***/
/******************************************************************************/
/**
 * \brief  Variable holding the value of the required output port 'info'.
 *
 * \details If necessary initialize this in the init function.
 *          The value of this variable will be written to the port at the end of
 *          the step function.
 */
static detector_topic_device_info_t
portInfoData;

// PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_C_VARIABLES) ENABLED START
// PROTECTED REGION END

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/

// PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_C_PROTOTYPES) ENABLED START
// PROTECTED REGION END

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
xme_status_t
detector_adv_device_operateFunction_init
(
    detector_adv_device_deviceComponent_config_t* const componentConfig
)
{
    // PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_INITIALIZE_C) ENABLED START
    XME_UNUSED_PARAMETER(componentConfig);

    return XME_STATUS_SUCCESS;
    // PROTECTED REGION END
}

void
detector_adv_device_operateFunction_step
(
    detector_adv_device_deviceComponent_config_t* const componentConfig
)
{
    xme_status_t status[1];
    
    detector_topic_device_info_t* portInfoDataPtr = &portInfoData;
    
    {
        // PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_STEP_C) ENABLED START
        xme_hal_safeString_strncpy(portInfoData.name, componentConfig->name, sizeof(portInfoData.name));
        portInfoData.counter = componentConfig->counter++;
        // PROTECTED REGION END
    }
    
    status[0] = detector_adv_device_deviceComponentWrapper_writePortInfo(portInfoDataPtr);
    
    {
        // PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_STEP_2_C) ENABLED START
        XME_UNUSED_PARAMETER(status);
        // PROTECTED REGION END
    }
}

void
detector_adv_device_operateFunction_fini
(
    detector_adv_device_deviceComponent_config_t* const componentConfig
)
{
    // PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_TERMINATE_C) ENABLED START
    XME_UNUSED_PARAMETER(componentConfig);
    // PROTECTED REGION END
}

// PROTECTED REGION ID(DETECTOR_ADV_DEVICE_OPERATEFUNCTION_IMPLEMENTATION_C) ENABLED START
// PROTECTED REGION END