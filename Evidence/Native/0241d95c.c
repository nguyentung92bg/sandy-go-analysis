/* IL2CPP: Dino.BusSand.App.UI.SettingRows$$Row
TMPro_TMP_Text_o* Dino_BusSand_App_UI_SettingRows__Row (UnityEngine_RectTransform_o* box, System_String_o* name, System_String_o* icon, System_String_o* label, float fromTop, System_Func_bool__o* get, System_Action_o* toggle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SettingRows$$Row
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_SettingRows__Row (UnityEngine_RectTransform_o* box,
   System_String_o* name, System_String_o* icon, System_String_o* label, float fromTop,
   System_Func_bool__o* get, System_Action_o* toggle, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_SettingRows__Row_231d95c
          (undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar1 = PTR_DAT_04cb8830;
  if ((bRam0000000004f9c599 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf408);
    FUN_02132f7c(PTR_DAT_04cb8838);
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb8840);
    FUN_02132f7c(PTR_DAT_04cb4e20);
    FUN_02132f7c(PTR_DAT_04cb8830);
    FUN_02132f7c(PTR_DAT_04cb8848);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c599 = 1;
  }
  puVar3 = PTR_DAT_04cad330;
  uVar7 = System_String__Concat_46c82e0(param_3,*(undefined8 *)puVar1,0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  puVar6 = PTR_DAT_04cb8848;
  puVar5 = PTR_DAT_04caf408;
  puVar4 = PTR_DAT_04cad4a8;
  puVar2 = PTR_DAT_04cacfc0;
  puVar1 = PTR_DAT_04cac878;
  uVar9 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  uVar10 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_UiKit__Img_228203c
                    (uVar9,uVar10,0,0,0x3f800000,param_2,uVar7,param_4,0,0);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
            (param_1,0xc3920000,uVar7,*(undefined8 *)puVar5);
  Dino_BusSand_App_UI_UiKit__Hex_2285a84(*(undefined8 *)puVar6,0);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  System_Nullable_Color____ctor_2bc9090(&uStack_98,*(undefined8 *)puVar1);
  uStack_a0 = uStack_88;
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uVar7 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (0x42840000,0x43910000,0x42a80000,0,0,param_2,param_3,param_5,
                     *(undefined8 *)puVar4,&uStack_b0,0x1001,0);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
            (param_1,0xc2820000,uVar7,*(undefined8 *)PTR_DAT_04caf418);
  puVar1 = PTR_DAT_04cb8838;
  if (param_3 != 0) {
    uVar8 = System_String__Replace_46d4a70
                      (param_3,*(undefined8 *)PTR_DAT_04cb4e20,*(undefined8 *)PTR_DAT_04cb8840,0);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    uVar8 = Dino_BusSand_App_UI_KitToggle__Build_22870a4
                      (**(undefined4 **)(*(long *)puVar2 + 0xb8),
                       (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],param_2,uVar8,param_6,param_7,0
                      );
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c
              (param_1,_UNK_00e2019c,uVar8,*(undefined8 *)puVar1);
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

