/* IL2CPP: Dino.BusSand.App.UI.HallScene.<CupChange>d__74$$MoveNext
bool Dino_BusSand_App_UI_HallScene__CupChange_d__74__MoveNext (Dino_BusSand_App_UI_HallScene__CupChange_d__74_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene.<CupChange>d__74$$MoveNext
   bool Dino_BusSand_App_UI_HallScene__CupChange_d__74__MoveNext
   (Dino_BusSand_App_UI_HallScene__CupChange_d__74_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HallScene__CupChange_d__74__MoveNext_22d40ec(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c3ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab448);
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ca = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar8 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(undefined4 *)(param_1 + 0x30) = uVar8;
    if (lVar5 == 0) goto LAB_023d43e0;
    uVar6 = Dino_BusSand_App_UI_HallScene__ChangeName_22d28e4(lVar5,*(undefined4 *)(param_1 + 0x28))
    ;
    uVar2 = Dino_BusSand_App_UI_HallScene__RotateName_22d26d0(lVar5);
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04cac6d8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac6d8);
    }
    fVar10 = (float)Dino_BusSand_App_UI_HallScene__ClipLength_22d2a10(uVar7,uVar6);
    fVar9 = (float)Dino_BusSand_App_UI_HallScene__ClipLength_22d2a10
                             (*(undefined8 *)(lVar5 + 0x40),uVar2);
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    if (fVar10 <= fVar9) {
      fVar10 = fVar9;
    }
    *(float *)(param_1 + 0x34) = fVar10;
    Dino_BusSand_App_UI_HallScene__PlayFromStart_22d3cd0(uVar7,uVar6);
    Dino_BusSand_App_UI_HallScene__PlayFromStart_22d3cd0(*(undefined8 *)(lVar5 + 0x40),uVar2);
LAB_023d421c:
    fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (fVar10 - *(float *)(param_1 + 0x30) < _UNK_00e207cc) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar8 = 2;
      goto LAB_023d43a8;
    }
    if (lVar5 == 0) goto LAB_023d43e0;
    Dino_BusSand_App_UI_HallScene__SetLabel_22d2248(lVar5,*(undefined4 *)(param_1 + 0x2c));
LAB_023d4294:
    fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    if (fVar10 - *(float *)(param_1 + 0x30) < _UNK_00e20270) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar8 = 3;
      goto LAB_023d43a8;
    }
    if (lVar5 == 0) goto LAB_023d43e0;
    uVar6 = *(undefined8 *)(lVar5 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(lVar5 + 0x48) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x48),0),
         lVar4 == 0)) goto LAB_023d43e0;
      uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
      if ((uVar3 & 1) == 0) {
        if ((*(long *)(lVar5 + 0x48) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x48),0),
           lVar4 == 0)) goto LAB_023d43e0;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
      }
      if (*(long *)(lVar5 + 0x48) == 0) goto LAB_023d43e0;
      uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar5 + 0x48),0);
      if (*(int *)(*(long *)PTR_DAT_04cab448 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab448);
      }
      Dino_BusSand_App_Fx__Restart_2150b94(uVar6,0);
    }
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_023d421c;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_023d4294;
    }
    if (iVar1 != 4) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  fVar10 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0x34) <= fVar10 - *(float *)(param_1 + 0x30)) {
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x70) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x70),0);
      return 0;
    }
LAB_023d43e0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
  uVar8 = 4;
LAB_023d43a8:
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  return 1;
}

