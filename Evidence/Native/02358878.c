/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$Init
void Dino_BusSand_App_Meta_YachtRacingData__Init (Dino_BusSand_App_Meta_YachtRacingData_o* __this, int32_t activityId, int64_t start, int64_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$Init
   void Dino_BusSand_App_Meta_YachtRacingData__Init (Dino_BusSand_App_Meta_YachtRacingData_o*
   __this, int32_t activityId, int64_t start, int64_t end, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingData__Init_2258878
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f9bfff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3f48);
                    /* try { // try from 023588b0 to 02459a5f has its CatchHandler @ 023588b0
                       catch() { ... } // from try @ 023588b0 with catch @ 023588b0
                       catch() { ... } // from try @ 02359e48 with catch @ 023588b0
                       catch() { ... } // from try @ 02359e94 with catch @ 023588b0
                       catch() { ... } // from try @ 0235a4a4 with catch @ 023588b0
                       catch() { ... } // from try @ 0235a4c0 with catch @ 023588b0
                       catch() { ... } // from try @ 0235a530 with catch @ 023588b0
                       catch() { ... } // from try @ 0235a580 with catch @ 023588b0
                       catch() { ... } // from try @ 0235a620 with catch @ 023588b0 */
    FUN_02132f7c(PTR_DAT_04cb3f50);
    bRam0000000004f9bfff = 1;
  }
  puVar3 = PTR_DAT_04cb3f50;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    Dino_BusSand_App_Meta_RacingRobotSave__ResetToStage1_225fb94(*(long *)(param_1 + 0xa0),0);
    auStack_40 = System_Guid__NewGuid_48283c0(0);
    uVar4 = System_Guid__ToString_482a234(auStack_40,0);
    puVar9 = (undefined8 *)(param_1 + 0x58);
    *puVar9 = uVar4;
    thunk_FUN_02134474(puVar9,uVar4);
    uVar4 = *(undefined8 *)puVar3;
    *(undefined4 *)(param_1 + 0x60) = param_2;
    *(undefined1 *)(param_1 + 0x80) = 1;
    lVar10 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined8 *)(param_1 + 0x68) = param_3;
    *(undefined8 *)(param_1 + 0x70) = param_4;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    lVar5 = thunk_FUN_0216e89c(uVar4);
    Dino_BusSand_App_Meta_YachtRacingHistory___ctor_22590fc();
    auVar2 = auStack_40;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = *puVar9;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10));
      *(undefined8 *)(lVar5 + 0x18) = param_3;
      *(undefined8 *)(lVar5 + 0x20) = param_4;
      auVar2 = auStack_40;
      if (lVar10 != 0) {
        lVar7 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cb3f48;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar5;
            thunk_FUN_02134474(plVar6,lVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar10,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
  auStack_40 = auVar2;
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

