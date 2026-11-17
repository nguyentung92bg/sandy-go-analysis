/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$IsOpenedClaim
bool Dino_BusSand_App_UI_ClimbTowerPanel__IsOpenedClaim (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, int32_t winPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$IsOpenedClaim
   bool Dino_BusSand_App_UI_ClimbTowerPanel__IsOpenedClaim (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, int32_t winPoint, const MethodInfo* method); */

bool Dino_BusSand_App_UI_ClimbTowerPanel__IsOpenedClaim_21a2314(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000004f9ba40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad860);
    bRam0000000004f9ba40 = 1;
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      iVar1 = System_Array__IndexOf_int__297cf74
                        (*(undefined8 *)(lVar2 + 0x10),param_2,0,*(int *)(lVar2 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad860 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                    0xc0) + 0x150));
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

