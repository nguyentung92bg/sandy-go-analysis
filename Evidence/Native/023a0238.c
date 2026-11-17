/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<>c__DisplayClass123_0$$<UseItem>b__1
bool Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__1 (Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0_o* __this, int32_t bus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<>c__DisplayClass123_0$$<UseItem>b__1
   bool Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__1
   (Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0_o* __this, int32_t bus,
   const MethodInfo* method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController___c__DisplayClass123_0___UseItem_b__1_22a0238
          (long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_28;
  
  if ((bRam0000000004f9c257 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9c257 = 1;
  }
  lStack_28 = 0;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x20) != 0)) {
    uVar4 = Dino_BusSand_Core_Road__TryGet_24127e0(*(long *)(lVar3 + 0x20),param_2,&lStack_28,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (lStack_28 != 0) {
      if (*(int *)(lStack_28 + 0x28) != 1) {
        return 0;
      }
      uVar4 = Dino_BusSand_Core_RoadBus__get_IsComplete_2411838(lStack_28,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (lStack_28 != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (*(int *)(lStack_28 + 0x5c) < 1) {
          if (lVar3 != 0) {
            Dino_BusSand_App_Gameplay_GameplayController__CaptureItemState_229b468(lVar3,param_2,1);
            puVar2 = PTR_DAT_04cad568;
            if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b94e == '\0') {
              FUN_02132f7c(PTR_DAT_04cad568);
              cRam0000000004f9b94e = '\x01';
            }
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar3 = *(long *)puVar2;
            }
            if (**(long **)(lVar3 + 0xb8) != 0) {
              Dino_BusSand_GameAudio__BoosterUsed_2383cec(0,**(long **)(lVar3 + 0xb8),3,0);
            }
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
              uVar1 = *(undefined4 *)(param_1 + 0x18);
              if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
              }
              Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar5,uVar1,0,(long)param_2,0);
              if (*(long *)(param_1 + 0x10) != 0) {
                lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
                lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
                if ((lVar3 != 0) &&
                   (uVar5 = Dino_BusSand_Core_StageEngine__AbsorbColorIntoRoadBus_242951c
                                      (lVar3,param_2,6,0), lVar6 != 0)) {
                  Dino_BusSand_View_GameView__Handle_23a1cb8(lVar6,uVar5,0);
                  if ((*(long *)(param_1 + 0x10) != 0) &&
                     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x38), lVar3 != 0)) {
                    Dino_BusSand_View_GameView__HoldBoosters_23a7260(_UNK_00e1fea8,lVar3,0);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      Dino_BusSand_App_Gameplay_GameplayController__Consumed_229f5dc
                                (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
        else if (lVar3 != 0) {
          uVar5 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248();
          uVar1 = *(undefined4 *)(param_1 + 0x18);
          if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
          }
          Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar5,uVar1,3,0xffffffffffffffff,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            Dino_BusSand_App_Gameplay_GameplayController__BoosterRefused_229f360
                      (*(long *)(param_1 + 0x10),param_2);
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

