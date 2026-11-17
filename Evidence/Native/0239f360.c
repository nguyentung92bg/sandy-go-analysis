/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$BoosterRefused
void Dino_BusSand_App_Gameplay_GameplayController__BoosterRefused (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t truck, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$BoosterRefused
   void Dino_BusSand_App_Gameplay_GameplayController__BoosterRefused
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, int32_t truck, const MethodInfo*
   method); */

void Dino_BusSand_App_Gameplay_GameplayController__BoosterRefused_229f360
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar3 = PTR_DAT_04cb58c8;
  puVar2 = PTR_DAT_04cb58c0;
  if ((bRam0000000004f9c248 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cb58c8);
    FUN_02132f7c(PTR_DAT_04cb58c0);
    FUN_02132f7c(PTR_DAT_04cb58d8);
    bRam0000000004f9c248 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_SimEvent____ctor_3abf368(lVar4,*(undefined8 *)puVar3);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_68,0x23,param_2,0,0,0);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar6 = *(long *)PTR_DAT_04cb58d0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x30) = uStack_58;
        *(undefined8 *)(lVar5 + 0x28) = uStack_60;
        *(undefined8 *)(lVar5 + 0x20) = uStack_68;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),0);
      }
      else {
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        uStack_40 = uStack_58;
        System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                  (lVar4,&uStack_50,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = PTR_DAT_04caba50;
      if (lVar7 != 0) {
        Dino_BusSand_View_GameView__Handle_23a1cb8(lVar7,lVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
        if (lVar4 != 0) {
          lVar5 = *(long *)PTR_DAT_04ca9d18;
          lVar7 = *(long *)(lVar5 + 0x38);
          if (lVar7 == 0) {
            FUN_0216b4cc(lVar5);
            lVar7 = *(long *)(lVar5 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar2 = PTR_DAT_04cab550;
          lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0216b470();
          }
          puVar3 = PTR_DAT_04cb58d8;
          uVar8 = **(undefined8 **)(lVar7 + 0xb8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar3,uVar8,0);
          Dino_BusSand_App_GameApp__Toast_2166a6c(lVar4,uVar8,0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

