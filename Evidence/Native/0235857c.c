/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckRecoverFromCoolTime
bool Dino_BusSand_App_Meta_YachtRacingCore__CheckRecoverFromCoolTime (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$CheckRecoverFromCoolTime
   bool Dino_BusSand_App_Meta_YachtRacingCore__CheckRecoverFromCoolTime
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__CheckRecoverFromCoolTime_225857c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if ((*(int *)(lVar3 + 0x2c) != 4) ||
       (lVar3 = Dino_BusSand_App_Meta_YachtRacingCore__StageInfo_2254fe0
                          (param_1,*(undefined4 *)(lVar3 + 0x78)), lVar3 == 0)) {
      return true;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      iVar2 = *(int *)(lVar3 + 0x20);
      iVar1 = *(int *)(lVar4 + 0x48) + 1;
      *(int *)(lVar4 + 0x48) = iVar1;
      if (iVar2 <= iVar1) {
        return true;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        lVar4 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        if (*(long *)(param_1 + 0x10) != 0) {
          return (long)*(int *)(lVar3 + 0x1c) <=
                 (lVar4 - *(long *)(*(long *)(param_1 + 0x10) + 0x40)) / 1000;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

