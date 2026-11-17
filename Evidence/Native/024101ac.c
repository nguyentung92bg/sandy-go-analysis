/* IL2CPP: Dino.BusSand.App.UI.KitParts$$BrownText
TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_KitParts__BrownText (UnityEngine_Transform_o* parent, System_String_o* name, System_String_o* text, float size, UnityEngine_Vector2_o box, float fromTop, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$BrownText
   TMPro_TextMeshProUGUI_o* Dino_BusSand_App_UI_KitParts__BrownText (UnityEngine_Transform_o*
   parent, System_String_o* name, System_String_o* text, float size, UnityEngine_Vector2_o box,
   float fromTop, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_KitParts__BrownText_23101ac
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c547 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf418);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4a8);
    bRam0000000004f9c547 = 1;
  }
  puVar4 = PTR_DAT_04caf418;
  puVar3 = PTR_DAT_04cad4a8;
  puVar1 = PTR_DAT_04cac878;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar7 = *(undefined4 **)(lVar5 + 0xb8);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  System_Nullable_Color____ctor_2bc9090
            (*puVar7,puVar7[1],puVar7[2],puVar7[3],&uStack_78,*(undefined8 *)puVar1);
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  uVar6 = Dino_BusSand_App_UI_UiKit__Text_2282314
                    (param_1,param_2,param_3,0,0,param_5,param_6,param_7,*(undefined8 *)puVar3,
                     &uStack_90,0x202,0);
  Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_4,0,uVar6,*(undefined8 *)puVar4);
  return uVar6;
}

