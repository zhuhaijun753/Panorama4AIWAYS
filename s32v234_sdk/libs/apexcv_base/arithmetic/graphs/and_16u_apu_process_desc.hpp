/*****************************************************************************
* 
* NXP Confidential Proprietary
*
* Copyright (c) 2013-2016 Freescale Semiconductor
* Copyright 2017 NXP 
* All Rights Reserved
*
******************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
***************************************************************************

  
/*!*********************************************************************************
*  @file and_16u_proc_desc.hpp
*  @brief Process description for bitwise and (unsigned 16 bit)
***********************************************************************************/
#ifndef AND16UAPUPROCESSDESC_HPP
#define AND16UAPUPROCESSDESC_HPP

#include <acf_process_desc_apu.hpp>
#include <acf_graph.hpp>
#include "graph_templates.h"
#include "arithmetic_acf.h"

GRAPH_CLASS_DEF_2In_1Out(AND_16u_K);


#define AND_16U_P_ID    AND_16U
#define AND_16U_P_STR  XSTR(AND_16U_P_ID)

class and_16u_apu_process_desc : public ACF_Process_Desc_APU
{
public:

  void Create()
  {
    Initialize(mGraph, AND_16U_P_STR);
  }
  graphClassName(AND_16u_K) mGraph;
};


#ifdef APEX2_EMULATE
REGISTER_PROCESS_TYPE(AND_16U_P_ID, and_16u_apu_process_desc)
#endif

#endif /* AND16UAPUPROCESSDESC_HPP */
