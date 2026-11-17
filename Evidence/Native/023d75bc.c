/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Find
Dino_BusSand_App_UI_HomeAtelier_Sheet_o* Dino_BusSand_App_UI_HomeAtelier__Find (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Find
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* Dino_BusSand_App_UI_HomeAtelier__Find
   (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t level, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c3d3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f20);
    bRam0000000004f9c3d3 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0x78),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cb6f20)
    ;
    if ((uVar1 & 1) == 0) {
      uStack_28 = 0;
    }
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

