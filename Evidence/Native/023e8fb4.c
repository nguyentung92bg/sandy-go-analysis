/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$get_AtelierBusy
bool Dino_BusSand_App_UI_HomePanel__get_AtelierBusy (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$get_AtelierBusy
   bool Dino_BusSand_App_UI_HomePanel__get_AtelierBusy (Dino_BusSand_App_UI_HomePanel_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_App_UI_HomePanel__get_AtelierBusy_22e8fb4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c439 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c439 = 1;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      bVar1 = *(char *)(*(long *)(param_1 + 0x50) + 0xf8) != '\0';
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

