/* IL2CPP: Dino.BusSand.App.UI.KitNode$$get_Claimable
bool Dino_BusSand_App_UI_KitNode__get_Claimable (Dino_BusSand_App_UI_KitNode_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitNode$$get_Claimable
   bool Dino_BusSand_App_UI_KitNode__get_Claimable (Dino_BusSand_App_UI_KitNode_o* __this, const
   MethodInfo* method); */

bool Dino_BusSand_App_UI_KitNode__get_Claimable_2181338(long param_1)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  
  uVar3 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    sVar2 = System_String__get_Chars_46ccb24(*(long *)(param_1 + 0x20),0,0);
    bVar1 = sVar2 != 0x7e;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

