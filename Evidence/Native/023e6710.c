/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Begin
void Dino_BusSand_App_UI_HomePuffs__Begin (Dino_BusSand_App_UI_HomePuffs_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePuffs$$Begin
   void Dino_BusSand_App_UI_HomePuffs__Begin (Dino_BusSand_App_UI_HomePuffs_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomePuffs__Begin_22e6710(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000004f9c428 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7338);
    FUN_02132f7c(PTR_DAT_04cb7340);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cb7348);
    bRam0000000004f9c428 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (lVar2 != 0) {
        lVar1 = *(long *)(param_1 + 0x60);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x18) = 0;
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

