/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$FixLegacyFont
void Dino_BusSand_App_UI_CommerceUi__FixLegacyFont (UnityEngine_UI_Text_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$FixLegacyFont
   void Dino_BusSand_App_UI_CommerceUi__FixLegacyFont (UnityEngine_UI_Text_o* t, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_CommerceUi__FixLegacyFont_22ac2d0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5e90);
    FUN_02132f7c(PTR_DAT_04cb5e98);
    bRam0000000004f9c2ad = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_UI_Text__get_font_4698038(param_1,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = UnityEngine_Resources__GetBuiltinResource_object__2891d80
                        (*(undefined8 *)PTR_DAT_04cb5e98,*(undefined8 *)PTR_DAT_04cb5e90);
      UnityEngine_UI_Text__set_font_4698164(param_1,uVar3,0);
    }
  }
  return;
}

