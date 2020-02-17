#include "xmodel_utils.hpp"
#include "xassets.hpp"
#include "xassets/xmodel.hpp"
#include "dobj.hpp"

extern "C"{

int CCDECL XModelGetBoneIndex(XModel *model, unsigned int name, unsigned int offset, uint8_t *index)
{
  unsigned int numBones;
  unsigned int localBoneIndex;
  uint16_t *boneNames;

  assert(index != NULL);

  boneNames = model->boneNames;
  numBones = model->numBones;

  assert(numBones < DOBJ_MAX_PARTS);

  for ( localBoneIndex = 0;name != boneNames[localBoneIndex]; ++localBoneIndex )
  {
    if ( localBoneIndex >= numBones )
    {
      return 0;
    }
  }
  *index = localBoneIndex + offset;
  return 1;
}


}



