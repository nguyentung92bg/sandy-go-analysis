/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Section
void Dino_BusSand_Cheat_CheatMobilePanel__Section (Dino_BusSand_Cheat_CheatMobilePanel_o* __this, System_String_o* title, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel$$Section
   void Dino_BusSand_Cheat_CheatMobilePanel__Section (Dino_BusSand_Cheat_CheatMobilePanel_o* __this,
   System_String_o* title, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel__Section_236ab3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((bRam0000000004f9c798 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf3d0);
    FUN_02132f7c(PTR_DAT_04cbad48);
    bRam0000000004f9c798 = 1;
  }
  puVar3 = PTR_DAT_04cbad48;
  puVar1 = PTR_DAT_04cac878;
  if (*(int *)(param_1 + 0x44) == 1) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 150.0;
  }
  puVar2 = PTR_DAT_04cad330;
  uVar4 = *(undefined8 *)puVar3;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  fVar7 = 30.0;
  if (*(float *)(param_1 + 0x40) <= 0.0) {
    fVar7 = 10.0;
  }
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar7;
  uVar4 = System_String__Concat_46c82e0(uVar4,param_2,0);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_68,*(undefined8 *)puVar1);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04caf3d0;
  uVar8 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar9 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0246ac84 to 0256ac8b has its CatchHandler @ 0246b0cc */
                    /* try { // try from 0246ac98 to 0256aca3 has its CatchHandler @ 0246b0c8 */
  uStack_70 = uStack_58;
  uStack_78 = uStack_60;
  uStack_80 = uStack_68;
                    /* try { // try from 0246accc to 0256ad33 has its CatchHandler @ 0246b0d4 */
  lVar5 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42380000,0x444d0000,0x428c0000,uVar8,uVar9,uVar6,uVar4,param_2,
                     *(undefined8 *)puVar1,&uStack_80,0x201,0);
  if ((lVar5 != 0) && (lVar5 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar5,0), lVar5 != 0)) {
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,lVar5,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,lVar5,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (0x41a00000,-35.0 - *(float *)(param_1 + 0x40),lVar5,0);
                    /* try { // try from 0246ad38 to 0256ad47 has its CatchHandler @ 0246b0c0 */
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 80.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0246ad58 to 0256ad63 has its CatchHandler @ 0246b0c4 */
  FUN_02133224();
}

