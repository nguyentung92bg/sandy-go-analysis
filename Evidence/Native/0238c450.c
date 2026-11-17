/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MenuButton
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__MenuButton (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Vector2_o size, System_String_o* faceKey, UnityEngine_Vector2_o pos, float rim, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$MenuButton
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_UiKit__MenuButton (UnityEngine_Transform_o*
   parent, System_String_o* name, UnityEngine_Vector2_o size, System_String_o* faceKey,
   UnityEngine_Vector2_o pos, float rim, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_UiKit__MenuButton_228c450
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c18e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf380);
    FUN_02132f7c(PTR_DAT_04cb5208);
    FUN_02132f7c(PTR_DAT_04cb51f8);
    bRam0000000004f9c18e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb5208;
  puVar3 = PTR_DAT_04caf380;
  uVar6 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                    (param_1,param_2,param_3,param_4,param_6,param_7,0,0);
  Dino_BusSand_App_UI_UiKit__HitArea_228277c();
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar4 = PTR_DAT_04cb51f8;
  puVar1 = PTR_DAT_04cacfc0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
            (param_1,param_2,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
             (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],param_5,uVar6,
             *(undefined8 *)puVar3,*(undefined8 *)puVar5,&uStack_88);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  uVar8 = **(undefined4 **)(*(long *)puVar1 + 0xb8);
  uVar10 = (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1];
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
            (uVar8,uVar10,uVar8,uVar10,0x3f800000,uVar6,*(undefined8 *)puVar4,param_8,&uStack_a0);
  lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar9 = *(float *)(lVar7 + 0x30) * param_5;
  Dino_BusSand_App_UI_UiKit__Stretch_2281f58
            (fVar9,*(float *)(lVar7 + 0x34) * param_5,fVar9,*(float *)(lVar7 + 0x38) * param_5);
  return uVar6;
}

