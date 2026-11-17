/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$remove_Clicked
void Dino_BusSand_App_UI_UIPanel__remove_Clicked (System_Action_GameObject__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$remove_Clicked
   void Dino_BusSand_App_UI_UIPanel__remove_Clicked (System_Action_GameObject__o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIPanel__remove_Clicked_2200ec4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cb1bd8;
  if ((bRam0000000004f9bc9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1be0);
    FUN_02132f7c(PTR_DAT_04cb1bd8);
    bRam0000000004f9bc9c = 1;
  }
  puVar2 = PTR_DAT_04cb1be0;
  lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
  do {
    lVar4 = System_Delegate__Remove_4872510(lVar6,param_1,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar7);
      }
    }
    lVar4 = FUN_0216aff4(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar5,lVar6);
    bVar3 = lVar4 != lVar6;
    lVar6 = lVar4;
  } while (bVar3);
  return;
}

