/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<ArrowBob>d__85$$MoveNext
bool Dino_BusSand_App_UI_GuidePanel__ArrowBob_d__85__MoveNext (Dino_BusSand_App_UI_GuidePanel__ArrowBob_d__85_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel.<ArrowBob>d__85$$MoveNext
   bool Dino_BusSand_App_UI_GuidePanel__ArrowBob_d__85__MoveNext
   (Dino_BusSand_App_UI_GuidePanel__ArrowBob_d__85_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_GuidePanel__ArrowBob_d__85__MoveNext_22cdc98
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((bRam0000000004f9c393 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c393 = 1;
  }
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_023cddf8;
    UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_3 + 0x20),0);
    *(undefined4 *)(param_3 + 0x2c) = 0;
    *(undefined4 *)(param_3 + 0x28) = param_2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  fVar6 = *(float *)(param_3 + 0x2c);
  fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar6 = fVar6 + fVar3;
  *(float *)(param_3 + 0x2c) = fVar6;
  fVar3 = (float)(int)((fVar6 + fVar6) * 0.5);
  fVar6 = (fVar6 + fVar6) - (fVar3 + fVar3);
  fVar3 = 2.0;
  if (fVar6 <= 2.0) {
    fVar3 = fVar6;
  }
  fVar4 = -1.0;
  if (0.0 <= fVar6) {
    fVar4 = fVar3 + -1.0;
  }
  fVar3 = (float)Dino_BusSand_App_Easing__Evaluate_21609e0(1.0 - ABS(fVar4),9,0);
  if (*(long *)(param_3 + 0x20) != 0) {
    uVar5 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x20) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (uVar5,*(float *)(param_3 + 0x28) + fVar3 * -30.0,*(long *)(param_3 + 0x20),0);
      *(undefined8 *)(param_3 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
      *(undefined4 *)(param_3 + 0x10) = 1;
      return 1;
    }
  }
LAB_023cddf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

