/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Finish
void Dino_BusSand_App_UI_KitPop__Finish (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Finish
   void Dino_BusSand_App_UI_KitPop__Finish (Dino_BusSand_App_UI_KitPop_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_KitPop__Finish_228f238(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04cb5110;
  if ((bRam0000000004f9c1ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5110);
    FUN_02132f7c(PTR_DAT_04cb52e8);
    bRam0000000004f9c1ae = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object___Remove_3a830f8
              (lVar2,param_1,*(undefined8 *)PTR_DAT_04cb52e8);
    plVar3 = (long *)(param_1 + 0x78);
    lVar2 = *plVar3;
    *plVar3 = 0;
    thunk_FUN_02134474(plVar3,0);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0238f2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

