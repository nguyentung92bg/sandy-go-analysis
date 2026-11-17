/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$PlayOnce
void Dino_BusSand_App_Meta_BattleRoyaleCore__PlayOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$PlayOnce
   void Dino_BusSand_App_Meta_BattleRoyaleCore__PlayOnce (Dino_BusSand_App_Meta_BattleRoyaleCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleCore__PlayOnce_22240ec(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
LAB_023241e8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar5 + 0x48) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(lVar5 + 0x54) = 0;
    if (lVar4 == 0) goto LAB_023241e8;
    lVar2 = *(long *)(lVar5 + 0x30);
    lVar5 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    if (lVar2 < lVar5) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_023241e8;
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x48) = 0;
    }
  }
  else if ((*(int *)(lVar5 + 0x48) == 3) &&
          (iVar1 = *(int *)(lVar5 + 0x4c) + -1, *(int *)(lVar5 + 0x4c) = iVar1, iVar1 < 1)) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      lVar4 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (long)*(int *)(lVar2 + 0x34) * 1000;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar3 = 6;
        if (lVar2 + lVar4 <= *(long *)(*(long *)(param_1 + 0x10) + 0x70)) {
          uVar3 = 0;
        }
        *(undefined4 *)(lVar5 + 0x48) = uVar3;
        goto LAB_023241bc;
      }
    }
    goto LAB_023241e8;
  }
LAB_023241bc:
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023241d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    return;
  }
  return;
}

