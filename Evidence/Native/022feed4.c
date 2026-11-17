/* IL2CPP: Dino.BusSand.App.UI.UIManager$$CloseAllPopups
void Dino_BusSand_App_UI_UIManager__CloseAllPopups (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$CloseAllPopups
   void Dino_BusSand_App_UI_UIManager__CloseAllPopups (Dino_BusSand_App_UI_UIManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__CloseAllPopups_21feed4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((bRam0000000004f9bc7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b70);
    bRam0000000004f9bc7b = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = System_Collections_Generic_List_object___ToArray_3a83728
                        (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb1b70), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_022fef7c;
        if ((*(char *)(lVar3 + 0x2c) == '\0') && (*(int *)(lVar3 + 0x28) == 2)) {
          Dino_BusSand_App_UI_UIManager__Close_21fe9a0(param_1);
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_022fef7c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

