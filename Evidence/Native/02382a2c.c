/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$Panel
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitPopup__Panel (UnityEngine_Transform_o* parent, System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPopup$$Panel
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitPopup__Panel (UnityEngine_Transform_o*
   parent, System_String_o* name, UnityEngine_Vector2_o size, UnityEngine_Vector2_o pos, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPopup__Panel_2282a2c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c148 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb4e18);
    bRam0000000004f9c148 = 1;
  }
  puVar2 = PTR_DAT_04cb4e18;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
            (param_1,param_2,param_3,param_4,0x3f800000,param_5,param_6,*(undefined8 *)puVar2,
             &uStack_68);
  return;
}

