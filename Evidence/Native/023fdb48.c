/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$UnlockLevel
int32_t Dino_BusSand_App_UI_MainHudPanel__UnlockLevel (int32_t act, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$UnlockLevel
   int32_t Dino_BusSand_App_UI_MainHudPanel__UnlockLevel (int32_t act, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_MainHudPanel__UnlockLevel_22fdb48(undefined4 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uStack_24;
  
  puVar1 = PTR_DAT_04cab380;
  if ((bRam0000000004f9c4b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cb44e8);
    FUN_02132f7c(PTR_DAT_04cae520);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb38e8);
    FUN_02132f7c(PTR_DAT_04cb38f0);
    bRam0000000004f9c4b5 = 1;
  }
  uVar2 = 0;
  uStack_24 = 0;
  if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 1) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cb38e8,param_1,0);
    if (lVar3 != 0) {
      uVar4 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar3,*(undefined8 *)PTR_DAT_04cb38f0,0);
      uVar2 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar4,0xffffffff,0);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
    }
    puVar1 = PTR_DAT_04cae520;
    lVar3 = *(long *)PTR_DAT_04cae520;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                      (lVar3,param_1,&uStack_24,*(undefined8 *)PTR_DAT_04cb44e8);
    if ((uVar2 & 1) == 0) {
      uStack_24 = 0;
    }
    uVar2 = (ulong)uStack_24;
  }
  return uVar2;
}

