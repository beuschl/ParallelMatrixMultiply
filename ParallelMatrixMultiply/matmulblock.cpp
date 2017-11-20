//
// Implementation of CMatMulBlock class
//

#include "matmulblock.h"

ParallelMatrixMultiply::CMatMulBlock::CMatMulBlock( int aStartRow,
                                                 int aEndRow,
                                                 int aStartColumn,
                                                 int aEndColumn,
                                                 int aiIndex,
                                                 int ajIndex )
{
   mStartRow = aStartRow;
   mEndRow = aEndRow;
   mStartColumn = aStartColumn;
   mEndColumn = aEndColumn;
   miIndex = aiIndex;
   mjIndex = ajIndex;
}

ParallelMatrixMultiply::CMatMulBlock::CMatMulBlock( const CMatMulBlock& aOther )
{
   mStartRow = aOther.mStartRow;
   mEndRow = aOther.mEndRow;
   mStartColumn = aOther.mStartColumn;
   mEndColumn = aOther.mEndColumn;
   miIndex = aOther.miIndex;
   mjIndex = aOther.mjIndex;
}

ParallelMatrixMultiply::CMatMulBlock::CMatMulBlock()
{
}


ParallelMatrixMultiply::CMatMulBlock::~CMatMulBlock()
{
}

int
ParallelMatrixMultiply::CMatMulBlock::getStartRow() const
{
   return mStartRow;
}

int
ParallelMatrixMultiply::CMatMulBlock::getEndRow() const
{
   return mEndRow;
}

int
ParallelMatrixMultiply::CMatMulBlock::getStartColumn() const
{
   return mStartColumn;
}

int
ParallelMatrixMultiply::CMatMulBlock::getEndColumn() const
{
   return mEndColumn;
}

int
ParallelMatrixMultiply::CMatMulBlock::getiIndex() const
{
   return miIndex;
}

int
ParallelMatrixMultiply::CMatMulBlock::getjIndex() const
{
   return mjIndex;
}

double**
ParallelMatrixMultiply::CMatMulBlock::getBlockData()
{
   return mPtrBlockData;
}

void
ParallelMatrixMultiply::CMatMulBlock::setBlockData( double** aPtrData )
{
   mPtrBlockData = aPtrData;
}
