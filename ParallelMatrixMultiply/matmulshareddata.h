//
// Shared data for the matrix multiply threads
//

#ifndef _MAT_MUL_SHARED_DATA_H__
#define _MAT_MUL_SHARED_DATA_H__

#include "matmulblock.h"
#include <vector>

namespace ParallelMatrixMultiply {

   typedef std::vector<int> TVecIntBlocksPerThread;
   typedef std::vector<CMatMulBlock*> TVecBlocksPerMatrix;

   class CMatMulSharedData
   {
      public:

         CMatMulSharedData();
         virtual ~CMatMulSharedData();

         std::vector<TVecBlocksPerMatrix> mVecMatrixBlocks;
         std::vector<int> mRowBlocks;
         std::vector<int> mColumnBlocks;
         std::vector<TVecIntBlocksPerThread> mBlocksThreadMapping;
         int       mNumThreads;
         int       mBlockSize;
         int       mRows;
         int       mColumns;
         double**  mPtrMatrix1;
         double**  mPtrMatrix2;
         double**  mPtrVector;
         double**  mPtrResultMatrix;
   };

}

#endif
