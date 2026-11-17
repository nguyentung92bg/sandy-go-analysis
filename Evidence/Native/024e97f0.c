/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPoint
UnityEngine_Vector3_o Dino_BusSand_View_StageLayout__ReturnPoint (Dino_BusSand_View_StageLayout_o* __this, float u, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$ReturnPoint
   UnityEngine_Vector3_o Dino_BusSand_View_StageLayout__ReturnPoint
   (Dino_BusSand_View_StageLayout_o* __this, float u, const MethodInfo* method); */

void Dino_BusSand_View_StageLayout__ReturnPoint_23e97f0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000004f9ca91 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdb18);
    bRam0000000004f9ca91 = 1;
  }
  lVar4 = *(long *)(param_2 + 0x130);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) == 0) {
LAB_024e99d8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (param_1 <= 0.0) {
      if (*(long *)(param_2 + 0x120) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x120) + 0x18) != 0) {
          return;
        }
        goto LAB_024e99d8;
      }
    }
    else if (*(float *)(lVar4 + ((long)(((ulong)*(uint *)(lVar4 + 0x18) << 0x20) + -0x100000000) >>
                                0x1e) + 0x20) <= param_1) {
      if (*(long *)(param_2 + 0x120) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x120) + 0x18) != 0) {
          return;
        }
        goto LAB_024e99d8;
      }
    }
    else {
      uVar3 = System_Array__BinarySearch_float__279650c(lVar4,*(undefined8 *)PTR_DAT_04cbdb18);
      if (*(long *)(param_2 + 0x130) != 0) {
        uVar2 = *(uint *)(*(long *)(param_2 + 0x130) + 0x18);
        uVar3 = uVar3 ^ (int)uVar3 >> 0x1f;
        uVar1 = uVar3;
        if ((int)(uVar2 - 1) <= (int)uVar3) {
          uVar1 = uVar2 - 1;
        }
        if ((int)uVar3 < 1) {
          uVar1 = 1;
        }
        if (*(long *)(param_2 + 0x120) != 0) {
          uVar3 = *(uint *)(*(long *)(param_2 + 0x120) + 0x18);
          if ((((uVar1 - 1 < uVar3) && (uVar1 < uVar3)) && (uVar1 - 1 < uVar2)) && (uVar1 < uVar2))
          {
            return;
          }
          goto LAB_024e99d8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

