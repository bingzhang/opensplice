/*
 * in_ddsiStreamWriterImpl.h
 *
 *  Created on: Mar 2, 2009
 *      Author: frehberg
 */

#ifndef IN_DDSISTREAMWRITERIMPL_H_
#define IN_DDSISTREAMWRITERIMPL_H_

#include "in_commonTypes.h"
#include "in_ddsiPublication.h"
#include "kernelModule.h" /* for v_message */
#include "in_transportSender.h"
#include "in_result.h"
#include "Coll_List.h"
#include "in_ddsiParticipant.h"
#include "in_ddsiSubscription.h"
#include "in_ddsiPublication.h"
#include "in_connectivityParticipantFacade.h"
#include "in_connectivityReaderFacade.h"
#include "in_connectivityWriterFacade.h"
#include "in_connectivityAdmin.h"
#include "in__configChannel.h"

#if defined (__cplusplus)
extern "C" {
#endif


/** narrower */
#define in_ddsiStreamWriterImpl(_o) \
    ((in_ddsiStreamWriterImpl)_o)
/**
 */
in_ddsiStreamWriterImpl
in_ddsiStreamWriterImplNew(
		in_configChannel config,
		in_transportSender sender,
		in_connectivityAdmin connectivityAdmin);

void
in_ddsiStreamWriterImplFree(
		in_ddsiStreamWriterImpl _this);


#if defined (__cplusplus)
}
#endif


#endif /* IN_DDSISTREAMWRITERIMPL_H_ */