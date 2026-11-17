/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnLevelWin
void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelWin (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int32_t type, int32_t clearedLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02323ff4) */
/* WARNING: Removing unreachable block (ram,0x02324004) */
/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnLevelWin
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelWin
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int32_t type, int32_t clearedLevel, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelWin_222666c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8();
  if (lVar2 != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__SetCommand_2222bc4(lVar2,2,0);
    lVar2 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
    if (lVar2 != 0) {
      uVar1 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
      if ((((uVar1 & 1) == 0) ||
          (uVar1 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0), (uVar1 & 1) == 0)) ||
         (uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__IsCheatData_2221168(lVar2),
         (uVar1 & 1) != 0)) {
        return;
      }
      uVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34();
      if ((uVar1 & 1) != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(char *)(lVar3 + 0x78) != '\0') && (*(int *)(lVar3 + 0x48) == 0)) {
          *(undefined1 *)(lVar2 + 0x30) = 1;
          *(char *)(lVar3 + 0x78) = '\0';
        }
        lVar2 = *(long *)(lVar2 + 0x28);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02324048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

