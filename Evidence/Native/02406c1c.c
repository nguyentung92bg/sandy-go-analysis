/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$Link
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_SettingPanel__Link (UnityEngine_RectTransform_o* parent, System_String_o* name, System_String_o* text, float fromTop, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$Link
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_SettingPanel__Link (UnityEngine_RectTransform_o*
   parent, System_String_o* name, System_String_o* text, float fromTop, float x, const MethodInfo*
   method); */

long * Dino_BusSand_App_UI_SettingPanel__Link_2306c1c
                 (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar6 = PTR_DAT_04cb7f90;
  puVar5 = PTR_DAT_04cb7f88;
  puVar2 = PTR_DAT_04cad330;
  puVar1 = PTR_DAT_04cac878;
                    /* try { // try from 02406c34 to 02506c3f has its CatchHandler @ 024073d4 */
                    /* try { // try from 02406c50 to 02506c67 has its CatchHandler @ 024073e0 */
  if ((bRam0000000004f9c4fd & 1) == 0) {
                    /* try { // try from 02406c7c to 02506c87 has its CatchHandler @ 02407394 */
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
                    /* try { // try from 02406ca4 to 02506cab has its CatchHandler @ 0240739c */
    FUN_02132f7c(PTR_DAT_04cad4c8);
    FUN_02132f7c(PTR_DAT_04cb7f88);
    FUN_02132f7c(PTR_DAT_04cb7f90);
    bRam0000000004f9c4fd = 1;
  }
                    /* try { // try from 02406cc8 to 02506ccf has its CatchHandler @ 02407398 */
  puVar4 = PTR_DAT_04caf418;
  puVar3 = PTR_DAT_04cad4c8;
                    /* try { // try from 02406ce0 to 02506d2b has its CatchHandler @ 02407400 */
  uVar7 = System_String__Concat_46d2b84(*(undefined8 *)puVar5,param_5,*(undefined8 *)puVar6,0);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  System_Nullable_Color____ctor_2bc9090
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_78,*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02406d3c to 02506d47 has its CatchHandler @ 024073f4 */
  uStack_80 = uStack_68;
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
                    /* try { // try from 02406d58 to 02506d6f has its CatchHandler @ 024073e8 */
  plVar8 = (long *)Dino_BusSand_App_UI_UiKit__Text_2282314
                             (0x42600000,0x442f0000,0x42980000,0,0,param_3,param_4,uVar7,
                              *(undefined8 *)puVar3,&uStack_90,0x202,0);
                    /* try { // try from 02406d84 to 02506d8f has its CatchHandler @ 02407378 */
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_1,param_2,plVar8,*(undefined8 *)puVar4);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x2c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2d0));
                    /* try { // try from 02406dac to 02506db3 has its CatchHandler @ 024073a0 */
                    /* try { // try from 02406dc4 to 02506dcf has its CatchHandler @ 02407374 */
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

