/* IL2CPP: Dino.BusSand.App.UI.KitParts$$Button
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitParts__Button (UnityEngine_Transform_o* content, System_String_o* name, int32_t color, float width, float y, float x, System_String_o* label, System_String_o* icon, float font, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$Button
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitParts__Button (UnityEngine_Transform_o*
   content, System_String_o* name, int32_t color, float width, float y, float x, System_String_o*
   label, System_String_o* icon, float font, float height, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_KitParts__Button_2306a4c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
                    /* try { // try from 02406a70 to 02506a7b has its CatchHandler @ 0240735c */
                    /* try { // try from 02406a88 to 02506ad3 has its CatchHandler @ 024073b8 */
  if ((bRam0000000004f9c548 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c548 = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar2 = PTR_DAT_04caf410;
  uVar4 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar5 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02406b14 to 02506b1f has its CatchHandler @ 024073e4 */
                    /* try { // try from 02406b38 to 02506b47 has its CatchHandler @ 024073c4 */
  uVar3 = Dino_BusSand_App_UI_UiKit__LabelButton_228c6c0
                    (param_1,param_5,uVar4,uVar5,param_4,param_6,param_7,param_8,param_9,param_10,0)
  ;
  uVar3 = Dino_BusSand_App_UI_UiKit__ButtonRoot_228cab4(uVar3,0);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_2,param_3,uVar3,*(undefined8 *)puVar2);
  return uVar3;
}

