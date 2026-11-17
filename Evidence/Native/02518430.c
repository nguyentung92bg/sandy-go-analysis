/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullSandDown
bool Dino_BusSand_Core_SandGrid__TryPullSandDown (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, bool canPull, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullSandDown
   bool Dino_BusSand_Core_SandGrid__TryPullSandDown (Dino_BusSand_Core_SandGrid_o* __this, int32_t
   x, int32_t y, bool canPull, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_SandGrid__TryPullSandDown_2418430
          (long param_1,uint param_2,uint param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
LAB_02518760:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar12 = *(int *)(param_1 + 0x10);
  uVar6 = param_2 + iVar12 * param_3;
  if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_02518764:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  if (*(char *)(lVar8 + (int)uVar6 + 0x20) != '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 3) {
    uVar6 = param_2;
    if ((param_4 & 1) == 0) {
      return 0;
    }
  }
  else if (iVar1 == 1) {
    uVar6 = param_2 << 1 | 1;
    if ((int)uVar6 < iVar12) {
      iVar12 = -1;
    }
    else if (iVar12 < (int)uVar6) {
      iVar12 = 1;
    }
    else {
      uVar6 = *(uint *)(param_1 + 100);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar6 = uVar6 ^ uVar6 << 0xd;
      uVar6 = uVar6 ^ uVar6 >> 0x11;
      iVar12 = 1;
      if ((uVar6 & 1) == 0) {
        iVar12 = -1;
      }
      *(uint *)(param_1 + 100) = uVar6 ^ uVar6 << 5;
    }
    fVar13 = 0.0;
    if ((param_4 & 1) != 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        fVar13 = *(float *)(param_1 + 0x20);
      }
      else {
        lVar8 = *(long *)(param_1 + 0x68);
        if (lVar8 == 0) goto LAB_02518760;
        if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_02518764;
        fVar13 = *(float *)(lVar8 + (long)(int)param_2 * 4 + 0x20);
      }
    }
    uVar6 = *(uint *)(param_1 + 100);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar6 = uVar6 ^ uVar6 << 0xd;
    uVar6 = uVar6 ^ uVar6 >> 0x11;
    uVar6 = uVar6 ^ uVar6 << 5;
    *(uint *)(param_1 + 100) = uVar6;
    if ((param_4 & 1) == 0) {
      return 0;
    }
    if (fVar13 <= (float)(uVar6 >> 8) / 16777216.0) {
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullCenterDirection_2418904
                        (param_1,param_2,param_3,iVar12);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                        (param_1,param_2,param_3 + 1,param_2,param_3);
    }
    else {
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                        (param_1,param_2,param_3 + 1,param_2,param_3);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullCenterDirection_2418904
                        (param_1,param_2,param_3,iVar12);
    }
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar6 = param_2 - iVar12;
  }
  else {
    if (iVar1 == 0) {
      uVar6 = *(uint *)(param_1 + 100);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar6 = uVar6 ^ uVar6 << 0xd;
      uVar6 = uVar6 ^ uVar6 >> 0x11;
      uVar7 = uVar6 ^ uVar6 << 5;
      iVar12 = 1;
      if ((uVar6 & 1) == 0) {
        iVar12 = -1;
      }
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      uVar7 = uVar7 ^ uVar7 << 0xd;
      uVar7 = uVar7 ^ uVar7 >> 0x11;
      uVar7 = uVar7 ^ uVar7 << 5;
      *(uint *)(param_1 + 100) = uVar7;
      if ((param_4 & 1) != 0) {
        fVar13 = (float)(uVar7 >> 8) / 16777216.0;
        if ((*(float *)(param_1 + 0x1c) <= fVar13) &&
           (uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                              (param_1,param_2,param_3 + 1,param_2,param_3), (uVar5 & 1) != 0)) {
          return 1;
        }
        uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                          (param_1,iVar12 + param_2,param_3 + 1,param_2,param_3);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                          (param_1,param_2 - iVar12,param_3 + 1,param_2,param_3);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        if ((fVar13 < *(float *)(param_1 + 0x1c)) &&
           (uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                              (param_1,param_2,param_3 + 1,param_2,param_3), (uVar5 & 1) != 0)) {
          return 1;
        }
      }
      return 0;
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                      (param_1,param_2,param_3 + 1,param_2,param_3);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    iVar12 = *(int *)(param_1 + 0x10);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    if ((int)param_2 < iVar12 >> 1) {
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                        (param_1,param_2 - 1,param_3 + 1,param_2,param_3);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar6 = param_2 + 1;
    }
    else {
      uVar5 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768
                        (param_1,param_2 + 1,param_3 + 1,param_2,param_3);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar6 = param_2 - 1;
    }
  }
  uVar7 = param_3 + 1;
  if ((((int)(uVar7 | uVar6) < 0) || (iVar12 = *(int *)(param_1 + 0x10), iVar12 <= (int)uVar6)) ||
     (*(int *)(param_1 + 0x14) <= (int)uVar7)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) goto LAB_02518900;
  uVar4 = uVar6 + iVar12 * uVar7;
  uVar2 = *(uint *)(lVar8 + 0x18);
  if (uVar4 < uVar2) {
    lVar9 = (long)(int)uVar4;
    cVar3 = *(char *)(lVar8 + lVar9 + 0x20);
    if (cVar3 == '\0') {
      return 0;
    }
    if (((-1 < (int)(param_3 | uVar6)) && (uVar6 != param_2)) &&
       ((*(int *)(param_1 + 0x18) == 2 && ((int)param_3 < *(int *)(param_1 + 0x14))))) {
      uVar6 = uVar6 + iVar12 * param_3;
      if (uVar2 <= uVar6) goto LAB_025188fc;
      if (*(char *)(lVar8 + (int)uVar6 + 0x20) == '\0') {
        return 0;
      }
    }
    param_2 = param_2 + iVar12 * param_3;
    if (param_2 < uVar2) {
      *(char *)(lVar8 + (int)param_2 + 0x20) = cVar3;
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0) {
LAB_02518900:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((uVar4 < *(uint *)(lVar8 + 0x18)) && (param_2 < *(uint *)(lVar8 + 0x18))) {
        *(undefined1 *)(lVar8 + 0x20 + (long)(int)param_2) = *(undefined1 *)(lVar8 + 0x20 + lVar9);
        lVar8 = *(long *)(param_1 + 0x38);
        if (lVar8 == 0) goto LAB_02518900;
        if (uVar4 < *(uint *)(lVar8 + 0x18)) {
          *(undefined1 *)(lVar8 + lVar9 + 0x20) = 0;
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 == 0) goto LAB_02518900;
          if (uVar4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined1 *)(lVar8 + lVar9 + 0x20) = 0;
            lVar8 = *(long *)(param_1 + 0x48);
            if (lVar8 == 0) goto LAB_02518900;
            uVar6 = *(uint *)(lVar8 + 0x18);
            if (uVar7 < uVar6) {
              lVar9 = (long)(int)uVar7;
              lVar8 = lVar8 + 0x20;
              *(int *)(lVar8 + lVar9 * 4) = *(int *)(lVar8 + lVar9 * 4) + -1;
              if (param_3 < uVar6) {
                lVar10 = (long)(int)param_3;
                lVar11 = *(long *)(param_1 + 0x58);
                *(int *)(lVar8 + lVar10 * 4) = *(int *)(lVar8 + lVar10 * 4) + 1;
                if (lVar11 == 0) goto LAB_02518900;
                uVar6 = *(uint *)(lVar11 + 0x18);
                if ((uVar7 < uVar6) &&
                   (*(undefined4 *)(lVar11 + lVar9 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60),
                   param_3 < uVar6)) {
                  *(undefined4 *)(lVar11 + lVar10 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x60);
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

