/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<AutoPlay>d__39$$MoveNext
bool Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_d__39__MoveNext (Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_d__39_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<AutoPlay>d__39$$MoveNext
   bool Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_d__39__MoveNext
   (Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_d__39_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ContinueBottomPanel__AutoPlay_d__39__MoveNext_22c2100(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9c33c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c33c = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar9 = *(float *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar9 < 5.0) goto LAB_023c218c;
    if (lVar6 == 0) goto LAB_023c2294;
    if (*(char *)(lVar6 + 0x4c) == '\0') {
      return 0;
    }
    if (*(int *)(param_1 + 0x28) != *(int *)(lVar6 + 0x48)) {
      return 0;
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (*(char *)(lVar6 + 0x4d) == '\0') {
      lVar4 = *(long *)(lVar6 + 0x38);
      if (lVar4 == 0) goto LAB_023c2294;
      if (*(char *)(lVar4 + 0x50) == '\0') {
        iVar5 = *(int *)(lVar4 + 0x68);
        iVar2 = Dino_BusSand_App_UI_ContinueBottomPager__get_PageCount_22bdf80();
        if (iVar2 < 2) {
          iVar5 = -1;
        }
        else {
          iVar5 = iVar5 + 1;
          iVar1 = 0;
          if (iVar2 != 0) {
            iVar1 = iVar5 / iVar2;
          }
          iVar5 = iVar5 - iVar1 * iVar2;
        }
        if (-1 < iVar5) {
          *(undefined1 *)(lVar6 + 0x4d) = 1;
          if (*(long *)(lVar6 + 0x38) == 0) goto LAB_023c2294;
          Dino_BusSand_App_UI_ContinueBottomPager__GoToPage_22be6b8
                    (_UNK_00e20094,*(long *)(lVar6 + 0x38),iVar5,1);
          uVar7 = Dino_BusSand_App_UI_ContinueBottomPanel__ClearAdvancing_22c1fc4(lVar6);
          Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar6,uVar7,0);
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (lVar6 == 0) {
LAB_023c2294:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(char *)(lVar6 + 0x4c) == '\0') || (*(int *)(param_1 + 0x28) != *(int *)(lVar6 + 0x48))) {
    return 0;
  }
  fVar9 = 0.0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_023c218c:
  fVar8 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x2c) = fVar9 + fVar8;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

