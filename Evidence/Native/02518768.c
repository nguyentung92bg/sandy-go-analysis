/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullFrom
bool Dino_BusSand_Core_SandGrid__TryPullFrom (Dino_BusSand_Core_SandGrid_o* __this, int32_t fx, int32_t fy, int32_t tx, int32_t ty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullFrom
   bool Dino_BusSand_Core_SandGrid__TryPullFrom (Dino_BusSand_Core_SandGrid_o* __this, int32_t fx,
   int32_t fy, int32_t tx, int32_t ty, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
          (long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((((int)(param_3 | param_2) < 0) || (iVar1 = *(int *)(param_1 + 0x10), iVar1 <= (int)param_2))
     || (*(int *)(param_1 + 0x14) <= (int)param_3)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) goto LAB_02518900;
  uVar4 = param_2 + iVar1 * param_3;
  uVar2 = *(uint *)(lVar8 + 0x18);
  if (uVar4 < uVar2) {
    lVar5 = (long)(int)uVar4;
    cVar3 = *(char *)(lVar8 + lVar5 + 0x20);
    if (cVar3 == '\0') {
      return 0;
    }
    if (((-1 < (int)(param_5 | param_2)) && (param_2 != param_4)) &&
       ((*(int *)(param_1 + 0x18) == 2 && ((int)param_5 < *(int *)(param_1 + 0x14))))) {
      param_2 = param_2 + iVar1 * param_5;
      if (uVar2 <= param_2) goto LAB_025188fc;
      if (*(char *)(lVar8 + (int)param_2 + 0x20) == '\0') {
        return 0;
      }
    }
    param_4 = param_4 + iVar1 * param_5;
    if (param_4 < uVar2) {
      *(char *)(lVar8 + (int)param_4 + 0x20) = cVar3;
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0) {
LAB_02518900:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((uVar4 < *(uint *)(lVar8 + 0x18)) && (param_4 < *(uint *)(lVar8 + 0x18))) {
        *(undefined1 *)(lVar8 + 0x20 + (long)(int)param_4) = *(undefined1 *)(lVar8 + 0x20 + lVar5);
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) goto LAB_02518900;
        if (uVar4 < *(uint *)(lVar8 + 0x18)) {
          *(undefined1 *)(lVar8 + lVar5 + 0x20) = 0;
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 == 0) goto LAB_02518900;
          if (uVar4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined1 *)(lVar8 + lVar5 + 0x20) = 0;
            lVar8 = *(long *)(param_1 + 0x48);
            if (lVar8 == 0) goto LAB_02518900;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (param_3 < uVar2) {
              lVar5 = (long)(int)param_3;
              lVar8 = lVar8 + 0x20;
              *(int *)(lVar8 + lVar5 * 4) = *(int *)(lVar8 + lVar5 * 4) + -1;
              if (param_5 < uVar2) {
                lVar6 = (long)(int)param_5;
                lVar7 = *(long *)(param_1 + 0x58);
                *(int *)(lVar8 + lVar6 * 4) = *(int *)(lVar8 + lVar6 * 4) + 1;
                if (lVar7 == 0) goto LAB_02518900;
                uVar2 = *(uint *)(lVar7 + 0x18);
                if ((param_3 < uVar2) &&
                   (*(undefined4 *)(lVar7 + lVar5 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60),
                   param_5 < uVar2)) {
                  *(undefined4 *)(lVar7 + lVar6 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60);
                  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025188fc:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

