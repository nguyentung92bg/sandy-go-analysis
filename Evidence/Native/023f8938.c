/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$CanRender
bool Dino_BusSand_App_UI_LanguagePanel__CanRender (TMPro_TMP_Text_o* tmp, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LanguagePanel$$CanRender
   bool Dino_BusSand_App_UI_LanguagePanel__CanRender (TMPro_TMP_Text_o* tmp, System_String_o* text,
   const MethodInfo* method); */

uint Dino_BusSand_App_UI_LanguagePanel__CanRender_22f8938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c494 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab530);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c494 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(param_1 + 0xf8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04cab530 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if ((bRam0000000004f9b7ce & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cab530,param_2,0);
        bRam0000000004f9b7ce = 1;
      }
      puVar1 = PTR_DAT_04cab530;
      uStack_28 = 0;
      if (lVar4 != 0) {
        uVar2 = TMPro_TMP_FontAsset__HasCharacters_42b6d34(lVar4,param_2,&uStack_28,1,1,0);
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar4);
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        return uVar2 & 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

