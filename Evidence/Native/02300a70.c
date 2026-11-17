/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$TxtKey
TMPro_TMP_Text_o* Dino_BusSand_App_UI_UIPanel__TxtKey (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, System_String_o* langKey, System_Object_array* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$TxtKey
   TMPro_TMP_Text_o* Dino_BusSand_App_UI_UIPanel__TxtKey (Dino_BusSand_App_UI_UIPanel_o* __this,
   System_String_o* name, System_String_o* langKey, System_Object_array* args, const MethodInfo*
   method); */

long Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cab550;
  if ((bRam0000000004f9bc98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc98 = 1;
  }
  puVar2 = PTR_DAT_04cab530;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Lang__Get_215f9c0(param_3,param_4,0);
  lVar6 = *(long *)puVar2;
  uVar7 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar3 = Dino_BusSand_App_LanguageFonts__IsRtl_2153f58(uVar7,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_LanguageFonts__FormatRtl_2153fdc(uVar4,0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar6 = Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,param_2,uVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar6 == 0) goto LAB_02300bc4;
      TMPro_TMP_Text__set_isRightToLeftText_42cb654(lVar6,uVar3 & 1,0);
    }
    return lVar6;
  }
LAB_02300bc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

