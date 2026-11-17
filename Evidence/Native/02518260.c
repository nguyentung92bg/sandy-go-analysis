/* IL2CPP: Dino.BusSand.Core.SandGrid$$PullCenterConverging
bool Dino_BusSand_Core_SandGrid__PullCenterConverging (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, int32_t o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$PullCenterConverging
   bool Dino_BusSand_Core_SandGrid__PullCenterConverging (Dino_BusSand_Core_SandGrid_o* __this,
   int32_t x, int32_t y, int32_t o, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_SandGrid__PullCenterConverging_2418260
          (ulong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = param_2 << 1 | 1;
  if ((int)uVar5 < iVar2) {
    iVar7 = -1;
  }
  else if (iVar2 < (int)uVar5) {
    iVar7 = 1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 100);
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    uVar5 = uVar5 ^ uVar5 << 0xd;
    uVar5 = uVar5 ^ uVar5 >> 0x11;
    iVar7 = 1;
    if ((uVar5 & 1) == 0) {
      iVar7 = -1;
    }
    *(uint *)(param_1 + 100) = uVar5 ^ uVar5 << 5;
  }
  uVar3 = param_1;
  uVar4 = param_1;
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) goto LAB_02518428;
    if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_0251842c;
    uVar3 = lVar6 + (long)(int)param_2 * 4;
  }
  uVar5 = *(uint *)(param_1 + 100);
  fVar8 = *(float *)(uVar3 + 0x20);
  iVar1 = iVar2 + param_4;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar5 = uVar5 ^ uVar5 << 0xd;
  uVar5 = uVar5 ^ uVar5 >> 0x11;
  uVar5 = uVar5 ^ uVar5 << 5;
  *(uint *)(param_1 + 100) = uVar5;
  if (fVar8 <= (float)(uVar5 >> 8) / 16777216.0) {
    uVar4 = Dino_BusSand_Core_SandGrid__PullConverging_2418b1c
                      (param_1,param_2,param_3,iVar1,param_4 + param_2,iVar7);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) goto LAB_02518428;
    uVar5 = iVar1 + param_2;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0251842c;
    if (*(char *)(lVar6 + (int)uVar5 + 0x20) != '\0') goto LAB_025183f4;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) goto LAB_02518428;
    uVar5 = iVar1 + param_2;
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0251842c;
    if (*(char *)(lVar6 + (int)uVar5 + 0x20) != '\0') goto LAB_025183f4;
    uVar3 = Dino_BusSand_Core_SandGrid__PullConverging_2418b1c
                      (param_1,param_2,param_3,iVar1,param_4 + param_2,iVar7);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  iVar7 = param_2 - iVar7;
  uVar4 = 0;
  if (iVar7 < 0) {
    return 0;
  }
  if (iVar2 <= iVar7) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 != 0) {
    uVar5 = iVar7 + iVar1;
    if (uVar5 < *(uint *)(lVar6 + 0x18)) {
      if (*(char *)(lVar6 + (int)uVar5 + 0x20) == '\0') {
        return 0;
      }
LAB_025183f4:
      Dino_BusSand_Core_SandGrid__Move_24189fc(param_1,uVar5,param_4 + param_2,param_3 + 1,param_3);
      return 1;
    }
LAB_0251842c:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02518428:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar4);
}

