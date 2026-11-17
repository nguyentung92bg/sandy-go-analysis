/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$<OnOpen>b__3_1
void Dino_BusSand_App_UI_PausePanel___OnOpen_b__3_1 (Dino_BusSand_App_UI_PausePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PausePanel$$<OnOpen>b__3_1
   void Dino_BusSand_App_UI_PausePanel___OnOpen_b__3_1 (Dino_BusSand_App_UI_PausePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PausePanel___OnOpen_b__3_1_231d75c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c593 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9c593 = 1;
  }
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b872 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,1,0);
    FUN_02132f7c(PTR_DAT_04cac808);
    FUN_02132f7c(PTR_DAT_04cac810);
    FUN_02132f7c(PTR_DAT_04cac818);
    bRam0000000004f9b872 = 1;
  }
  if (*(long *)(lVar5 + 0x28) != 0) {
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (*(long *)(lVar5 + 0x28),*(undefined8 *)PTR_DAT_04cac808);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(lVar5 + 0x20);
      if (lVar3 == 0) goto LAB_02268f3c;
      if (*(int *)(lVar3 + 0x20) == 2) {
        Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28(lVar3,1,0);
        lVar3 = *(long *)(lVar5 + 0x28);
        auStack_24[0] = 1;
        uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_24);
        if (lVar3 == 0) goto LAB_02268f3c;
        uVar4 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar3,*(undefined8 *)PTR_DAT_04cac818,2,uVar4,
                           *(undefined8 *)PTR_DAT_04cac810);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) goto LAB_02268f3c;
          Dino_BusSand_App_Gameplay_GameplayController__LockInput_229dd28
                    (*(long *)(lVar5 + 0x20),0,0);
        }
      }
    }
    return;
  }
LAB_02268f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

