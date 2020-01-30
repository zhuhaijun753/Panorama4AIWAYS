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
*  @file clz_16s_graph.hpp
*  @brief ACF graph for count leading zeros (signed 16-bit)
***********************************************************************************/
#ifndef CLZ16SGRAPH_HPP
#define CLZ16SGRAPH_HPP

#include <acf_graph.hpp>
#include "arithmetic_acf.h"

class clz_16s_graph : public ACF_Graph
{
public:
  clz_16s_graph() : ACF_Graph()
{
    XREGISTER_ACF_KERNEL(CLZ_16s_K);
  }

   void Create()
   {
      //set identifier for graph
      SetIdentifier("clz_16s_graph");
      
      //add kernels
      AddKernel("_clz_16s", CLZ_16s_KN);

      //add graph ports
      AddInputPort(GR_IN_0);

      AddOutputPort(GR_OUT_0);

      //specify connections
      Connect(GraphPort(GR_IN_0),   KernelPort("_clz_16s", GR_IN_0));
      Connect(KernelPort("_clz_16s", GR_OUT_0), GraphPort(GR_OUT_0));
   }
};

#endif /* CLZ16SGRAPH_HPP */
