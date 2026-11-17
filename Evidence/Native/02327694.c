/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose$$get_Running
bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__get_Running (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtSpecialLose$$get_Running
   bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__get_Running (const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleYachtSpecialLose__get_Running_2227694(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04cb2c90;
  if ((bRam0000000004f9bdfe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2c90);
    FUN_02132f7c(PTR_DAT_04cb2d20);
    bRam0000000004f9bdfe = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = *(long **)(lVar3 + 0xb8);
  if ((char)plVar4[1] == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar4 = *(long **)(*(long *)puVar1 + 0xb8);
    }
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar2 = 0 < *(int *)(*plVar4 + 0x18);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

