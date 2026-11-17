/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$Intro
void Dino_BusSand_App_Meta_SystemOpenFeature__Intro (int32_t id, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.SystemOpenFeature$$Intro
   void Dino_BusSand_App_Meta_SystemOpenFeature__Intro (int32_t id, System_Action_o* done, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_SystemOpenFeature__Intro_2253500(int param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cb3d00;
  if ((bRam0000000004f9bfe4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3d40);
    FUN_02132f7c(PTR_DAT_04caf3e0);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb3d00);
    bRam0000000004f9bfe4 = 1;
  }
  lVar3 = *(long *)puVar1;
  lStack_28 = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
                    /* try { // try from 023535a0 to 024538ef has its CatchHandler @ 023535a0
                       catch() { ... } // from try @ 023535a0 with catch @ 023535a0
                       catch() { ... } // from try @ 023539c4 with catch @ 023535a0
                       catch() { ... } // from try @ 02353ac8 with catch @ 023535a0
                       catch() { ... } // from try @ 02353ce0 with catch @ 023535a0
                       catch() { ... } // from try @ 02353d10 with catch @ 023535a0
                       catch() { ... } // from try @ 02353dbc with catch @ 023535a0
                       catch() { ... } // from try @ 02353df0 with catch @ 023535a0
                       catch() { ... } // from try @ 02353e94 with catch @ 023535a0
                       catch() { ... } // from try @ 02353ebc with catch @ 023535a0
                       catch() { ... } // from try @ 02353ee8 with catch @ 023535a0
                       catch() { ... } // from try @ 02353f20 with catch @ 023535a0
                       catch() { ... } // from try @ 02353f4c with catch @ 023535a0 */
  if (lVar3 != 0) {
    bVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (lVar3,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cb3d40);
    if ((bVar2 & lStack_28 != 0) == 0) {
      if (param_1 == 2) {
        uVar4 = Dino_BusSand_App_UI_SimpleClimbTowerPanel__Open_21a8174(param_2,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
        }
      }
      else if (param_1 == 3) {
        if (*(int *)(*(long *)PTR_DAT_04cac668 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar3 = Dino_BusSand_App_Meta_LiveOps__Get_object__27ef0a4(*(undefined8 *)PTR_DAT_04caf3e0);
        if (lVar3 != 0) {
          Dino_BusSand_App_Meta_StreakRateFeature__ClearSlotGuide_224ec9c();
        }
        if (*(int *)(*(long *)PTR_DAT_04cae9a8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10(0);
        uVar4 = Dino_BusSand_App_UI_SimpleStreakRatePanel__Open_21dd55c(param_2,0,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
        }
      }
      else {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        (**(code **)(param_2 + 0x18))
                  (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      (**(code **)(lStack_28 + 0x18))
                (*(undefined8 *)(lStack_28 + 0x40),param_2,*(undefined8 *)(lStack_28 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

