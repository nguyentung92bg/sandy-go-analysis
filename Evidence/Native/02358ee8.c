/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$PrepareSpecialLose
void Dino_BusSand_App_Meta_YachtRacingCore__PrepareSpecialLose (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$PrepareSpecialLose
   void Dino_BusSand_App_Meta_YachtRacingCore__PrepareSpecialLose
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__PrepareSpecialLose_2258ee8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 100);
  iVar3 = Dino_BusSand_App_Meta_YachtRacingCore__MaxProgress_22551dc(param_1,0xffffffff);
  if (iVar1 + 1 == iVar3) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = *(undefined4 *)(param_1 + 100);
    lVar4 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468();
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x18) = uVar2;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02358f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
  return;
}

