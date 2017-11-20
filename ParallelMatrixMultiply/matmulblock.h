//
// Represents a submatrix (block)
//

#ifndef _MAT_MUL_BLOCK__
#define _MAT_MUL_BLOCK__

namespace ParallelMatrixMultiply {

   class CMatMulBlock
   {
      public:

         CMatMulBlock( int aStartRow,
                        int aEndRow,
                        int aStartColumn,
                        int aEndColumn,
                        int aiIndex,
                        int ajIndex );
         CMatMulBlock( const CMatMulBlock& aOther );
         virtual ~CMatMulBlock();

         int getStartRow() const;
         int getEndRow() const;
         int getStartColumn() const;
         int getEndColumn() const;
         int getiIndex() const;
         int getjIndex() const;
         double** getBlockData();
         void setBlockData( double** aPtrData );

      private:

         CMatMulBlock();

      private:

         int      mStartRow;
         int      mEndRow;
         int      mStartColumn;
         int      mEndColumn;
         int      miIndex;
         int      mjIndex;
         double** mPtrBlockData;
   };

}

#endif
