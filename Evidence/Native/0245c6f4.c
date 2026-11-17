/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Creative
bool Dino_BusSand_Cheat_CheatManager__get_Creative (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$get_Creative
   bool Dino_BusSand_Cheat_CheatManager__get_Creative (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_CheatManager__get_Creative_235c6f4(long param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c730 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04ca9e68);
    FUN_02132f7c(PTR_DAT_04caa3c0);
    bRam0000000004f9c730 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Application__get_isMobilePlatform_4352d28(0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      if (*(char *)(param_1 + 0x20) == '\0') {
        System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_NoValue_4850928
                  (0,*(undefined8 *)PTR_DAT_04caa3c0);
      }
      return (bool)*(undefined1 *)(param_1 + 0x21);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Application__get_isEditor_43543ec(0);
    lVar5 = *(long *)(param_1 + 0x100);
    if ((uVar4 & 1) == 0) {
      if (lVar5 == 0) goto LAB_0245c7d0;
      cVar1 = *(char *)(lVar5 + 0x3f);
    }
    else {
      if (lVar5 == 0) {
LAB_0245c7d0:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      cVar1 = *(char *)(lVar5 + 0x40);
    }
    bVar3 = cVar1 != '\0';
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

