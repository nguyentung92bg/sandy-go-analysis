/* IL2CPP: Dino.BusSand.View.PaintingLayer$$get_BloomLeft
float Dino_BusSand_View_PaintingLayer__get_BloomLeft (Dino_BusSand_View_PaintingLayer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PaintingLayer$$get_BloomLeft
   float Dino_BusSand_View_PaintingLayer__get_BloomLeft (Dino_BusSand_View_PaintingLayer_o* __this,
   const MethodInfo* method); */

float Dino_BusSand_View_PaintingLayer__get_BloomLeft_23d9f18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000004f9ca35 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc398);
    bRam0000000004f9ca35 = 1;
  }
  puVar1 = PTR_DAT_04cbc398;
  fVar6 = 0.0;
  lVar4 = 8;
  lVar3 = *(long *)(param_1 + 0x48);
  while (lVar3 != 0) {
    if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar4 - 8U) {
LAB_024d9fe8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (0.0 <= *(float *)(lVar3 + lVar4 * 4)) {
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
        lVar3 = *(long *)(param_1 + 0x48);
      }
      if (lVar3 == 0) break;
      if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar4 - 8U) goto LAB_024d9fe8;
      fVar5 = *(float *)(*(long *)(lVar2 + 0xb8) + 4) - *(float *)(lVar3 + lVar4 * 4);
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x88) {
      return fVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

