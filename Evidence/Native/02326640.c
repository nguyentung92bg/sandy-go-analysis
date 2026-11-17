/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnLevelStart
void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelStart (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$OnLevelStart
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelStart
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, int32_t level, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__OnLevelStart_2226640(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  Dino_BusSand_App_Meta_BattleRoyaleFeature__HookSpend_2226488();
  *(undefined1 *)(param_1 + 0x22) = 1;
  lVar3 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x48) == 1) {
      lVar5 = *(long *)(lVar3 + 0x20);
      *(undefined4 *)(lVar6 + 0x54) = 0;
      if (lVar5 == 0) goto LAB_023241e8;
      lVar2 = *(long *)(lVar6 + 0x30);
      lVar6 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      if (lVar2 < lVar6) {
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_023241e8;
        *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x48) = 0;
      }
    }
    else if ((*(int *)(lVar6 + 0x48) == 3) &&
            (iVar1 = *(int *)(lVar6 + 0x4c) + -1, *(int *)(lVar6 + 0x4c) = iVar1, iVar1 < 1)) {
      lVar5 = *(long *)(lVar3 + 0x20);
      if (lVar5 != 0) {
        lVar5 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(lVar3);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = (long)*(int *)(lVar2 + 0x34) * 1000;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          uVar4 = 6;
          if (lVar2 + lVar5 <= *(long *)(*(long *)(lVar3 + 0x10) + 0x70)) {
            uVar4 = 0;
          }
          *(undefined4 *)(lVar6 + 0x48) = uVar4;
          goto LAB_023241bc;
        }
      }
      goto LAB_023241e8;
    }
LAB_023241bc:
    lVar3 = *(long *)(lVar3 + 0x28);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023241d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
LAB_023241e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

