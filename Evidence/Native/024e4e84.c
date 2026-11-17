/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnLengths
void Dino_BusSand_View_StageLayout__ReturnLengths (Dino_BusSand_View_StageLayout_o* __this, float* total, float* corner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnLengths
   void Dino_BusSand_View_StageLayout__ReturnLengths (Dino_BusSand_View_StageLayout_o* __this,
   float* total, float* corner, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__ReturnLengths_23e4e84
               (long param_1,float *param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar1 == **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) goto LAB_024e4ef0;
  }
  Dino_BusSand_View_StageLayout__BuildReturnPath_23e8c48(param_1);
LAB_024e4ef0:
  lVar2 = *(long *)(param_1 + 0x130);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) == 0) {
LAB_024e4fc8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    fVar6 = *(float *)(lVar2 + ((long)(((ulong)*(uint *)(lVar2 + 0x18) << 0x20) + -0x100000000) >>
                               0x1e) + 0x20);
    lVar2 = *(long *)(param_1 + 0x120);
    *param_2 = fVar6;
    *param_3 = fVar6 * 0.5;
    fVar6 = _UNK_00e20010;
    if (lVar2 != 0) {
      uVar3 = 0;
      lVar4 = 0x28;
      do {
        if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar3) {
          return;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_024e4fc8;
        fVar7 = *(float *)(lVar2 + lVar4);
        fVar5 = (float)Dino_BusSand_View_StageLayout__get_LoopBackZ_23e6da8(param_1);
        if (fVar5 + fVar6 <= fVar7) {
          lVar2 = *(long *)(param_1 + 0x130);
          if (lVar2 != 0) {
            if ((uint)uVar3 < *(uint *)(lVar2 + 0x18)) {
              fVar5 = *(float *)(lVar2 + uVar3 * 4 + 0x20) + 1.0;
              fVar6 = *param_2 * 0.5;
              if (fVar5 <= *param_2 * 0.5) {
                fVar6 = fVar5;
              }
              *param_3 = fVar6;
              return;
            }
            goto LAB_024e4fc8;
          }
          break;
        }
        lVar2 = *(long *)(param_1 + 0x120);
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0xc;
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

