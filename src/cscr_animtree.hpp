#pragma once

struct scr_animtree_t
{
  struct XAnim_s *anims;
};

struct scrAnimPub_t
{
  unsigned int animtrees;
  unsigned int animtree_node;
  unsigned int animTreeNames;
  struct scr_animtree_t xanim_lookup[2][128];
  unsigned int xanim_num[2];
  unsigned int animTreeIndex;
  bool animtree_loading;
  char _padding[100]; // to size of 0x480 (asm)
};


extern "C"
{
    extern scrAnimPub_t gScrAnimPub;

struct XAnim_s *CCDECL Scr_GetAnims(unsigned int index);
const char *CCDECL XAnimGetAnimDebugName(struct XAnim_s *anims, unsigned int animIndex); //Maybe wrong place

};
