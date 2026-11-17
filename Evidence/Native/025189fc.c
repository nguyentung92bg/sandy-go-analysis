/* IL2CPP: Dino.BusSand.Core.SandGrid$$Move
void Dino_BusSand_Core_SandGrid__Move (Dino_BusSand_Core_SandGrid_o* __this, int32_t fi, int32_t ti, int32_t fy, int32_t ty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$Move
   void Dino_BusSand_Core_SandGrid__Move (Dino_BusSand_Core_SandGrid_o* __this, int32_t fi, int32_t
   ti, int32_t fy, int32_t ty, const MethodInfo* method); */

void Dino_BusSand_Core_SandGrid__Move_24189fc
               (long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    if ((param_2 < *(uint *)(lVar3 + 0x18)) && (param_3 < *(uint *)(lVar3 + 0x18))) {
      lVar2 = (long)(int)param_2;
      *(undefined1 *)(lVar3 + 0x20 + (long)(int)param_3) = *(undefined1 *)(lVar3 + 0x20 + lVar2);
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 == 0) goto LAB_02518b18;
      if ((param_2 < *(uint *)(lVar3 + 0x18)) && (param_3 < *(uint *)(lVar3 + 0x18))) {
        *(undefined1 *)(lVar3 + 0x20 + (long)(int)param_3) = *(undefined1 *)(lVar3 + 0x20 + lVar2);
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 == 0) goto LAB_02518b18;
        if (param_2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined1 *)(lVar3 + lVar2 + 0x20) = 0;
          lVar3 = *(long *)(param_1 + 0x40);
          if (lVar3 == 0) goto LAB_02518b18;
          if (param_2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined1 *)(lVar3 + lVar2 + 0x20) = 0;
            lVar3 = *(long *)(param_1 + 0x48);
            if (lVar3 == 0) goto LAB_02518b18;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (param_4 < uVar1) {
              lVar2 = (long)(int)param_4;
              lVar3 = lVar3 + 0x20;
              *(int *)(lVar3 + lVar2 * 4) = *(int *)(lVar3 + lVar2 * 4) + -1;
              if (param_5 < uVar1) {
                lVar4 = (long)(int)param_5;
                lVar5 = *(long *)(param_1 + 0x58);
                *(int *)(lVar3 + lVar4 * 4) = *(int *)(lVar3 + lVar4 * 4) + 1;
                if (lVar5 == 0) goto LAB_02518b18;
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (param_4 < uVar1) {
                  *(undefined4 *)(lVar5 + lVar2 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60);
                  if (param_5 < uVar1) {
                    *(undefined4 *)(lVar5 + lVar4 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60);
                    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02518b18:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

