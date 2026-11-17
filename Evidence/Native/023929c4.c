/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_CycleDays
int32_t Dino_BusSand_App_Meta_WinStreak__get_CycleDays (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$get_CycleDays
   int32_t Dino_BusSand_App_Meta_WinStreak__get_CycleDays (const MethodInfo* method); */

int Dino_BusSand_App_Meta_WinStreak__get_CycleDays_22929c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar4 = PTR_DAT_04cb53f0;
  puVar3 = PTR_DAT_04cb2838;
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c1e2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb53f0);
    FUN_02132f7c(PTR_DAT_04cb2838);
    bRam0000000004f9c1e2 = 1;
  }
  iVar5 = Dino_BusSand_App_Meta_WinStreak__Num_229286c
                    (*(undefined8 *)puVar3,*(undefined8 *)puVar4,7);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  iVar1 = 1;
  if (0 < iVar5) {
    iVar1 = iVar5;
  }
  return iVar1;
}

