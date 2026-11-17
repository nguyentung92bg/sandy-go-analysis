/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$get_Active
bool Dino_BusSand_App_UI_KitAdopt__get_Active (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$get_Active
   bool Dino_BusSand_App_UI_KitAdopt__get_Active (const MethodInfo* method); */

bool Dino_BusSand_App_UI_KitAdopt__get_Active_227cf54(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c129 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4b80);
    bRam0000000004f9c129 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    return 0 < *(int *)(**(long **)(lVar2 + 0xb8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

