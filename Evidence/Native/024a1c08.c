/* IL2CPP: Dino.BusSand.View.GameView$$remove_TapResolved
void Dino_BusSand_View_GameView__remove_TapResolved (Dino_BusSand_View_GameView_o* __this, System_Action_int__List_SimEvent___o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$remove_TapResolved
   void Dino_BusSand_View_GameView__remove_TapResolved (Dino_BusSand_View_GameView_o* __this,
   System_Action_int__List_SimEvent___o* value, const MethodInfo* method); */

void Dino_BusSand_View_GameView__remove_TapResolved_23a1c08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9c921 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5818);
    bRam0000000004f9c921 = 1;
  }
  puVar1 = PTR_DAT_04cb5818;
  lVar5 = *(long *)(param_1 + 0x1c8);
  do {
    lVar3 = System_Delegate__Remove_4872510(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_0216e7a0(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar3,uVar6);
      }
    }
    lVar3 = FUN_0216aff4(param_1 + 0x1c8,lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

