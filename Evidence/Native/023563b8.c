/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckCanActiveBots
bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckCanActiveBots
   bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__CheckCanActiveBots_22563b8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734();
  if (lVar2 == 0) {
    return false;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28))
    ;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      lVar3 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
      if (lVar3 != 0) {
        if ((long)*(int *)(lVar3 + 0x24) <= (lVar2 - lVar4) / 1000) {
          return true;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
          lVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_Config_2254734(param_1);
          if (lVar2 != 0) {
            return *(int *)(lVar2 + 0x28) <= iVar1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

