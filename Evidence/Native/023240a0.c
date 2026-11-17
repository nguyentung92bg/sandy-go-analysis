/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$TryAutoAddStartCommand
void Dino_BusSand_App_Meta_BattleRoyaleCore__TryAutoAddStartCommand (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02323ff4) */
/* WARNING: Removing unreachable block (ram,0x02324004) */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$TryAutoAddStartCommand
   void Dino_BusSand_App_Meta_BattleRoyaleCore__TryAutoAddStartCommand
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__TryAutoAddStartCommand_22240a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0), (uVar1 & 1) == 0)) ||
     (uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(param_1), (uVar1 & 1) != 0
     )) {
    return;
  }
  uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(char *)(lVar2 + 0x78) != '\0') && (*(int *)(lVar2 + 0x48) == 0)) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(char *)(lVar2 + 0x78) = '\0';
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02324048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  return;
}

