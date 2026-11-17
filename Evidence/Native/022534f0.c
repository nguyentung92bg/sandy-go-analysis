/* IL2CPP: Dino.BusSand.App.LanguageFonts$$AddCharacters
bool Dino_BusSand_App_LanguageFonts__AddCharacters (TMPro_TMP_FontAsset_o* fa, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.LanguageFonts$$AddCharacters
   bool Dino_BusSand_App_LanguageFonts__AddCharacters (TMPro_TMP_FontAsset_o* fa, System_String_o*
   text, const MethodInfo* method); */

uint Dino_BusSand_App_LanguageFonts__AddCharacters_21534f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9b7ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab530);
    bRam0000000004f9b7ce = 1;
  }
  puVar1 = PTR_DAT_04cab530;
  uStack_28 = 0;
  if (param_1 != 0) {
    uVar2 = TMPro_TMP_FontAsset__HasCharacters_42b6d34(param_1,param_2,&uStack_28,1,1,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

