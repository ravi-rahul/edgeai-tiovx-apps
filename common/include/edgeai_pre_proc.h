/*
 *  Copyright (C) 2023 Texas Instruments Incorporated - http://www.ti.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _TI_EDGEAI_PRE_PROC_H_
#define _TI_EDGEAI_PRE_PROC_H_

#include <string>

#include <tiovx_dl_pre_proc_module.h>
#include <TI/j7_tidl.h>

namespace ti::edgeai::common
{
    using namespace std;

    class preProc
    {
        public:
            /* Default constructor. Use the compiler generated default one. */
            preProc();

            /* Destructor. */
            ~preProc();

            /**
             * Helper function to dump the configuration information.
             */
            void        dumpInfo();

            /** Helper function to parse pre process configuration. */
            int32_t     getConfig(const string &modelBasePath, sTIDL_IOBufDesc_t *ioBufDesc);

        public:
            /* Data structure passed to pre process module */
            TIOVXDLPreProcModuleObj     dlPreProcObj;

            /* These will be used in msc */
            int32_t                     cropHeight{0};
            int32_t                     cropWidth{0};
            int32_t                     resizeHeight{0};
            int32_t                     resizeWidth{0};
            
    };
}

#endif // _TI_EDGEAI_PRE_PROC_H_