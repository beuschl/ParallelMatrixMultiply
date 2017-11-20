//
// Shared data for the matrix multiply threads
//

#include "matmulshareddata.h"

ParallelMatrixMultiply::CMatMulSharedData::CMatMulSharedData()
{
   TVecBlocksPerMatrix aMatrixBlocks;

   mVecMatrixBlocks.push_back( aMatrixBlocks );
   mVecMatrixBlocks.push_back( aMatrixBlocks );
}


ParallelMatrixMultiply::CMatMulSharedData::~CMatMulSharedData()
{
}

