/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Button
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Button (UnityEngine_Transform_o* parent, System_String_o* name, int32_t color, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, System_String_o* faceKey, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Button
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__Button (UnityEngine_Transform_o* parent,
   System_String_o* name, int32_t color, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos,
   System_String_o* faceKey, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_UiKit__Button_228c218
          (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
          ,undefined8 param_6,undefined4 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c18d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf380);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    FUN_02132f7c(PTR_DAT_04cb5200);
    bRam0000000004f9c18d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb5200;
  puVar4 = PTR_DAT_04cb51f8;
  puVar3 = PTR_DAT_04caf380;
  uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  Dino_BusSand_App_UI_UiKit__HitArea_228277c();
  param_2 = param_2 / 236.0;
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar1 = PTR_DAT_04cacfc0;
  uVar8 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar9 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
            (uVar8,uVar9,uVar8,uVar9,param_2,uVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar5,
             &uStack_98);
  Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0);
  uVar7 = *(undefined8 *)puVar4;
  if (param_8 == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    param_8 = Dino_BusSand_App_UI_UiKit__FaceKey_228c108(param_7);
  }
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uVar8 = **(undefined4 **)(*(long *)puVar1 + 0xb8);
  uVar9 = (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
            (uVar8,uVar9,uVar8,uVar9,param_2,uVar6,uVar7,param_8,&uStack_b0);
  Dino_BusSand_App_UI_UiKit__Stretch_2281f58
            (param_2 * 21.0,param_2 * 23.0,param_2 * 21.0,param_2 * 12.0);
  return uVar6;
}

