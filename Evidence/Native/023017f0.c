/* IL2CPP: Dino.BusSand.App.UI.ScaleButton.<Spring>d__16$$MoveNext
bool Dino_BusSand_App_UI_ScaleButton__Spring_d__16__MoveNext (Dino_BusSand_App_UI_ScaleButton__Spring_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ScaleButton.<Spring>d__16$$MoveNext
   bool Dino_BusSand_App_UI_ScaleButton__Spring_d__16__MoveNext
   (Dino_BusSand_App_UI_ScaleButton__Spring_d__16_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ScaleButton__Spring_d__16__MoveNext_22017f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f9bca6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9bca6 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar5 = *(float *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar6 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar5 = fVar5 + fVar6;
    *(float *)(param_1 + 0x2c) = fVar5;
    if (lVar3 == 0) goto LAB_02301994;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar2 == 0))
    goto LAB_02301994;
    fVar4 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
    fVar5 = *(float *)(lVar3 + 0x38);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fVar6 = _UNK_00e20948;
    if (_UNK_00e20948 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar5 = 0.0;
    *(float *)(param_1 + 0x28) = fVar4 / fVar6 + -1.0;
  }
  if (fVar5 < *(float *)(lVar3 + 0x30)) {
    lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    fVar5 = *(float *)(lVar3 + 0x38);
    fVar6 = *(float *)(lVar3 + 0x3c);
    fVar7 = *(float *)(param_1 + 0x28);
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar4 = *(float *)(lVar3 + 0x40);
    fVar9 = *(float *)(lVar3 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
    }
    fVar8 = (float)Dino_BusSand_App_UI_UiMotion__Spring_2290b48(fVar8 / fVar9,0);
    if (lVar2 != 0) {
      fVar7 = fVar7 * fVar8 + 1.0;
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar5 * fVar7,fVar6 * fVar7,fVar4 * fVar7,lVar2,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
    lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(lVar3 + 0x38),*(undefined4 *)(lVar3 + 0x3c),
                 *(undefined4 *)(lVar3 + 0x40),lVar2,0);
      return 0;
    }
  }
LAB_02301994:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

