/* IL2CPP: Dino.BusSand.App.GameApp$$GiveUp
void Dino_BusSand_App_GameApp__GiveUp (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$GiveUp
   void Dino_BusSand_App_GameApp__GiveUp (Dino_BusSand_App_GameApp_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_GameApp__GiveUp_21688e0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if ((bRam0000000004f9b870 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac7e8);
    FUN_02132f7c(PTR_DAT_04cac7f0);
    FUN_02132f7c(PTR_DAT_04cac7f8);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac800);
    bRam0000000004f9b870 = 1;
  }
  puVar4 = PTR_DAT_04cac800;
  puVar3 = PTR_DAT_04cac7e8;
  puVar2 = PTR_DAT_04cac498;
  if (*(long *)(param_1 + 0x28) != 0) {
    Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
              (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_GameTracking__ContinueOffer_22193d0(uVar1,*(undefined8 *)puVar4,0,0,0);
    puVar2 = PTR_DAT_04cac668;
    if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
      lVar5 = *(long *)PTR_DAT_04cac668;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 8) != '\0') {
        lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
        System_Action_int____ctor_35ef18c(uVar6,param_1,*(undefined8 *)PTR_DAT_04cac7f0,0);
        uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cac7f8,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),uVar6,uVar7,*(undefined8 *)(lVar5 + 0x28));
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x20) != 3) {
        return;
      }
      if (*(int *)(lVar5 + 0x20) != 5) {
        *(undefined4 *)(lVar5 + 0x20) = 5;
        Dino_BusSand_App_Gameplay_GameplayController__ClearHandlers_229d4e4(lVar5);
        *(undefined4 *)(lVar5 + 0x60) = 0;
        lVar5 = *(long *)(lVar5 + 0x70);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0239d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),5,*(undefined8 *)(lVar5 + 0x28))
          ;
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

