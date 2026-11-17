/* IL2CPP: Dino.BusSand.App.UI.TapRipple.<>c__DisplayClass8_0$$<Ripple>b__0
void Dino_BusSand_App_UI_TapRipple___c__DisplayClass8_0___Ripple_b__0 (Dino_BusSand_App_UI_TapRipple___c__DisplayClass8_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TapRipple.<>c__DisplayClass8_0$$<Ripple>b__0
   void Dino_BusSand_App_UI_TapRipple___c__DisplayClass8_0___Ripple_b__0
   (Dino_BusSand_App_UI_TapRipple___c__DisplayClass8_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_TapRipple___c__DisplayClass8_0___Ripple_b__0_228b248
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c178 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c178 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  puVar1 = PTR_DAT_04cad4c0;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar10 = *(float *)(lVar4 + 0xc);
    fVar11 = *(float *)(lVar4 + 0x10);
    fVar12 = *(float *)(lVar4 + 0x14);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar6 != 0) {
      fVar9 = 1.0;
      fVar7 = fVar9;
      if (param_1 <= 1.0) {
        fVar7 = param_1;
      }
      fVar8 = fVar9;
      if (0.0 <= param_1) {
        fVar8 = 1.0 - fVar7;
      }
      fVar7 = 1.0 - fVar8 * fVar8 * fVar8;
      if (fVar7 <= 1.0) {
        fVar9 = fVar7;
      }
      fVar8 = 0.25;
      if (0.0 <= fVar7) {
        fVar8 = fVar9 * 0.75 + 0.25;
      }
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar8 * fVar10,fVar8 * fVar11,fVar8 * fVar12,lVar6,0);
      plVar3 = *(long **)(param_2 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0238b3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,(1.0 - param_1) * 0.75,plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

