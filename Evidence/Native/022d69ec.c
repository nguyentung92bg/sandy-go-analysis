/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$SetSlider
void Dino_BusSand_App_UI_PassportPanel__SetSlider (Dino_BusSand_App_UI_PassportPanel_o* __this, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$SetSlider
   void Dino_BusSand_App_UI_PassportPanel__SetSlider (Dino_BusSand_App_UI_PassportPanel_o* __this,
   float v, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__SetSlider_21d69ec(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cb07d0;
  puVar2 = PTR_DAT_04cb07c8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb07d0);
    FUN_02132f7c(PTR_DAT_04cb07c8);
                    /* catch() { ... } // from try @ 022d64e0 with catch @ 022d6a4c */
                    /* catch() { ... } // from try @ 022d6854 with catch @ 022d6a50 */
    bRam0000000004f9bb58 = 1;
  }
                    /* catch() { ... } // from try @ 022d65f0 with catch @ 022d6a54 */
                    /* catch() { ... } // from try @ 022d6550 with catch @ 022d6a58
                       catch() { ... } // from try @ 022d668c with catch @ 022d6a58 */
  plVar4 = (long *)Dino_BusSand_App_UI_UIPanel__Get_object__29460d0
                             (param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 022d6a9c to 023d6b27 has its CatchHandler @ 022d6a9c
                       catch() { ... } // from try @ 022d6a9c with catch @ 022d6a9c
                       catch() { ... } // from try @ 022d7030 with catch @ 022d6a9c */
      UnityEngine_UI_Slider__set_minValue_4695bc8(0,plVar4,0);
      UnityEngine_UI_Slider__set_maxValue_4695c60(0x3f800000,plVar4,0);
                    /* WARNING: Could not recover jumptable at 0x022d6ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x428))(param_1,plVar4,*(undefined8 *)(*plVar4 + 0x430));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

