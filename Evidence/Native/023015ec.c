/* IL2CPP: Dino.BusSand.App.UI.ScaleButton.<Press>d__15$$MoveNext
bool Dino_BusSand_App_UI_ScaleButton__Press_d__15__MoveNext (Dino_BusSand_App_UI_ScaleButton__Press_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScaleButton.<Press>d__15$$MoveNext
   bool Dino_BusSand_App_UI_ScaleButton__Press_d__15__MoveNext
   (Dino_BusSand_App_UI_ScaleButton__Press_d__15_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_ScaleButton__Press_d__15__MoveNext_22015ec
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((bRam0000000004f9bca5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9bca5 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  lVar3 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar8 = *(float *)(param_4 + 0x40);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar5 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar8 = fVar8 + fVar5;
    *(float *)(param_4 + 0x40) = fVar8;
    if (lVar3 == 0) goto LAB_023017a0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0), lVar2 == 0))
    goto LAB_023017a0;
    uVar4 = UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    *(undefined4 *)(param_4 + 0x30) = param_3;
    fVar5 = *(float *)(lVar3 + 0x28);
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    fVar7 = *(float *)(lVar3 + 0x40);
    *(undefined4 *)(param_4 + 0x40) = 0;
    fVar8 = 0.0;
    *(ulong *)(param_4 + 0x34) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar5,(float)uVar6 * fVar5);
    *(float *)(param_4 + 0x3c) = fVar7 * fVar5;
  }
  if (fVar8 < *(float *)(lVar3 + 0x2c)) {
    lVar2 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    fVar5 = *(float *)(param_4 + 0x3c);
    fVar7 = *(float *)(param_4 + 0x40);
    fVar8 = *(float *)(param_4 + 0x30);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar10 = *(undefined8 *)(param_4 + 0x34);
    fVar11 = *(float *)(lVar3 + 0x2c);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
    }
    fVar7 = (float)Dino_BusSand_App_UI_UiMotion__OutQuad_228a4fc(fVar7 / fVar11,0);
    if (lVar2 != 0) {
      fVar9 = (float)uVar6;
      fVar11 = (float)((ulong)uVar6 >> 0x20);
      fVar11 = fVar11 + ((float)((ulong)uVar10 >> 0x20) - fVar11) * fVar7;
      UnityEngine_Transform__set_localScale_43d1be0
                (CONCAT44(fVar11,fVar9 + ((float)uVar10 - fVar9) * fVar7),fVar11,
                 fVar8 + (fVar5 - fVar8) * fVar7,lVar2,0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
  else {
    lVar3 = UnityEngine_Component__get_transform_43bcd18(lVar3,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),
                 *(undefined4 *)(param_4 + 0x3c),lVar3,0);
      return 0;
    }
  }
LAB_023017a0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

