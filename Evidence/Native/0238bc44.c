/* IL2CPP: Dino.BusSand.App.UI.UiKit$$WordGap
float Dino_BusSand_App_UI_UiKit__WordGap (UnityEngine_Material_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$WordGap
   float Dino_BusSand_App_UI_UiKit__WordGap (UnityEngine_Material_o* m, const MethodInfo* method);
    */

float Dino_BusSand_App_UI_UiKit__WordGap_228bc44(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c185 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab590);
    bRam0000000004f9c185 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar1 = PTR_DAT_04cab590;
  fVar6 = 0.0;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab590 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = UnityEngine_Material__HasProperty_437c01c
                      (param_1,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      uVar2 = UnityEngine_Material__HasProperty_437c01c
                        (param_1,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc),0);
      fVar6 = 0.0;
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        fVar4 = (float)UnityEngine_Material__GetFloat_4383a0c
                                 (param_1,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0xc),0);
        fVar6 = 0.0;
        if (0.0 <= fVar4) {
          fVar6 = fVar4;
        }
        fVar6 = fVar6 * 0.5;
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      fVar4 = (float)UnityEngine_Material__GetFloat_4383a0c
                               (param_1,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x54),0);
      fVar6 = (fVar6 + fVar4) * 30.0;
      dVar5 = (double)FUN_049b52f0((double)fVar6,&dStack_28);
      if (0.0 <= fVar6) {
        if (dVar5 != 0.5) {
          return (float)(int)(fVar6 + 0.5);
        }
        fVar4 = 1.0;
      }
      else {
        if (dVar5 != -0.5) {
          return (float)(int)(fVar6 + -0.5);
        }
        fVar4 = -1.0;
      }
      fVar6 = (float)dStack_28;
      if (((long)dStack_28 & 1U) != 0) {
        fVar6 = (float)dStack_28 + fVar4;
      }
    }
  }
  return fVar6;
}

