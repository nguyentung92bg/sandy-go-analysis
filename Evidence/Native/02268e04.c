/* IL2CPP: Dino.BusSand.App.GameApp$$OpenQuitConfirm
void Dino_BusSand_App_GameApp__OpenQuitConfirm (Dino_BusSand_App_GameApp_o* __this, bool reset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$OpenQuitConfirm
   void Dino_BusSand_App_GameApp__OpenQuitConfirm (Dino_BusSand_App_GameApp_o* __this, bool reset,
   const MethodInfo* method); */

void Dino_BusSand_App_GameApp__OpenQuitConfirm_2168e04(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_24 [4];
  
  if ((bRam0000000004f9b872 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac808);
    FUN_02132f7c(PTR_DAT_04cac810);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02268dc4 with catch @ 02268e50
                        */
    FUN_02132f7c(PTR_DAT_04cac818);
    bRam0000000004f9b872 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac808);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) goto LAB_02268f3c;
      if (*(int *)(lVar2 + 0x20) == 2) {
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(lVar2,1,0);
        lVar2 = *(long *)(param_1 + 0x28);
        abStack_24[0] = param_2 & 1;
        uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),abStack_24);
        if (lVar2 == 0) goto LAB_02268f3c;
        uVar3 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar2,*(undefined8 *)PTR_DAT_04cac818,2,uVar3,
                           *(undefined8 *)PTR_DAT_04cac810);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_02268f3c;
          Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                    (*(long *)(param_1 + 0x20),0,0);
        }
      }
    }
    return;
  }
LAB_02268f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

