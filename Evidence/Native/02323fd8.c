/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AutoAddStartCommand
void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoAddStartCommand (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$AutoAddStartCommand
   void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoAddStartCommand
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, bool force, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__AutoAddStartCommand_2223fd8(long param_1,ulong param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  
  uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB_02324064;
    pcVar2 = (char *)(lVar3 + 0x78);
    if ((*pcVar2 == '\0') || (*(int *)(lVar3 + 0x48) != 0)) goto LAB_0232402c;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_02324064:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    pcVar2 = (char *)(*(long *)(param_1 + 0x10) + 0x78);
  }
  *pcVar2 = '\0';
LAB_0232402c:
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02324048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}

