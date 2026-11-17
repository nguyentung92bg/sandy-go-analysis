/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$add_PageSelected
void Dino_BusSand_App_UI_ContinueBottomPager__add_PageSelected (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, System_Action_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPager$$add_PageSelected
   void Dino_BusSand_App_UI_ContinueBottomPager__add_PageSelected
   (Dino_BusSand_App_UI_ContinueBottomPager_o* __this, System_Action_int__o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPager__add_PageSelected_22bdcd0
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f9c31b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    bRam0000000004f9c31b = 1;
  }
  puVar1 = PTR_DAT_04cac7e0;
  lVar5 = *(long *)(param_1 + 0x28);
  do {
    lVar3 = System_Delegate__Combine_4872324(lVar5,param_2,0);
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
    lVar3 = FUN_0216aff4((long *)(param_1 + 0x28),lVar4,lVar5);
    bVar2 = lVar3 != lVar5;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}

