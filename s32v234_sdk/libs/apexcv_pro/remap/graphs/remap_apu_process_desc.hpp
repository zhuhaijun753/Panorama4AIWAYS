/*****************************************************************************
* 
* NXP Confidential Proprietary
*
* Copyright (c) 2014-2016 Freescale Semiconductor
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
****************************************************************************/

#ifndef REMAPBILINEARPROCESSDESC_HPP
#define REMAPBILINEARPROCESSDESC_HPP


#include <acf_process_desc_apu.hpp>
#include "remap_graph.hpp"

class remap_bilinear_process_desc : public ACF_Process_Desc_APU
{
public:

   void Create()
   {
      Initialize(mRemap_bilinear_graph, "REMAP");
      FlagInputAsChunkBasedIndirect("SRC_IMG");
      SetInputChunkSize("LOCAL_OFFSET", 10, 5);
      SetInputChunkSize("DELTA", 10, 5);
   }

   remap_bilinear_graph mRemap_bilinear_graph;
};

#endif /* REMAPBILINEARPROCESSDESC_HPP */

